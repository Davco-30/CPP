#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;
    node *father;
    int color; ///1: Rojo, 0: Negro
};

node *nulo = NULL;
node *root;

void null_node();
node *add_node(int num, node *checker);
node *find_node(int num, node *checker);
node *rotate_right(node *checker_A);
node *rotate_left(node *checker_A);
node *fixup(node *checker_A);
node *delete_node(int num, node *checker);
node *find_smallest(node *checker);
node *transplant(node *checker_A, node *checker_B);

int main(){
    null_node();

    ///Inicio.
    while(true){
        int option;

        cout << "Red Black Tree" << endl;
        cout << "1. Agregar nodo.\n" << "2. Encontrar nodo.\n" << "3. Eliminar nodo.\n";
        cout << "4. Salir\n" << endl;
        cout << "Ingresa opción: ";

        cin >> option;
        cout << endl;

        if(option == 1){
            cout << "ACCIÓN 1.\n";
            int num;
            cout << "Ingresa número: ";
            cin >> num;

            add_node(num, root);
        }

        else if(option == 2){
            cout << "ACCIÓN 2.\n";
            int num;
            cout << "Ingresa el valor del nodo que buscas: ";
            cin >> num;

            find_node(num, root);
        }

        else if(option == 3){
            cout << "ACCIÓN 3.\n";
            int num;
            cout << "Ingresa el valor del nodo que deseas eliminar: ";
            cin >> num;
            delete_node(num, root);
        }

        else if(option == 4){
            break;
        }

        else{
            cout << "Opción inválida.\n" << endl;
        }
    }

    cout << "SISTEMA APAGADO.";
}

void null_node(){
    nulo = new node;
    nulo->value = 0;
    root = nulo;
}

node *transplant(node *checker_A, node *checker_B){
    node *check_dad_A = checker_A->father;
    node *check_dad_B = checker_B->father;

    if(checker_B->right != nulo){
        check_dad_B->left = checker_B->right;
    }

    else{
        check_dad_B->left = nulo;
    }

    checker_B->father = checker_A->father;

    ///Hijo izquierdo
    if(checker_A->left != nulo){
        (checker_A->left)->father = checker_B;
        checker_B->left = checker_A->left;
    }

    else{
        checker_B->left = nulo;
    }

    ///Hijo derecho
    if(checker_A->right != nulo){
        (checker_A->right)->father = checker_B;
        checker_B->right = checker_A->right;
    }

    else{
        checker_B->right = nulo;
    }

}

node *find_smallest(node *checker){
    if(checker->left == nulo){
        return checker;
    }

    else{
        return find_smallest(checker->left);
    }
}

node *delete_node(int num, node *checker){
    if(checker == nulo){
        return nulo;
    }

    if(num < checker->value){
        checker->left = delete_node(num, checker->left);
        return checker;
    }

    else if(num > checker->value){
        checker->right = delete_node(num, checker->right);
        return checker;
    }

    else if(num == checker->value){
        node *check_dad = checker->father;

        if(checker->left == nulo && checker->right == nulo){
            if(checker == check_dad->left){
                check_dad->left = nulo;
            }

            else if(checker == check_dad->right){
                check_dad->right = nulo;
            }

            return nulo;
        }

        if(checker->left == nulo && checker->right != nulo){
            (checker->right)->father = check_dad;

            if(checker == check_dad->left){
                check_dad->left = checker->right;
            }

            else if(checker == check_dad->right){
                check_dad->right = checker->right;
            }

            checker->father = nulo;

            return checker->right;
        }

        if(checker->left != nulo && checker->right == nulo){
            (checker->left)->father = check_dad;

            if(checker == check_dad->left){
                check_dad->left = checker->right;
            }

            else if(checker == check_dad->right){
                check_dad->right = checker->right;
            }

            checker->father = nulo;

            return checker->left;
        }

        if(checker->left != nulo && checker->right != nulo){
            node *replaced = find_smallest(checker->right);

            int original = checker->value;
            checker->value = replaced->value;
            checker->right = delete_node(original, checker->right);

            return checker;
        }
    }
}

node *fixup(node *checker_A){
    node *check_dad = checker_A->father;
    node *check_grand = check_dad->father;

    while( check_dad->color == 1){
        if( check_dad == check_grand->left ){
            node *check_uncle = check_grand->right;

            if(check_uncle->color == 1){
                check_uncle->color = 0;
                check_dad->color = 0;
                check_grand->color = 1;
                checker_A = check_grand;
            }

            else{
                if(checker_A == check_dad->right){
                    checker_A = check_dad;

                    rotate_left(checker_A);
                }

                check_dad->color = 0;
                check_grand->color = 1;

                rotate_right(check_grand);
            }
        }

        else{
            node *check_uncle = check_grand->left;

            if(check_uncle->color == 1){
                check_uncle->color = 0;
                check_dad->color = 0;
                check_grand->color = 1;
                checker_A = check_grand;
            }

            else{
                if(checker_A == check_dad->left){
                    checker_A = check_dad;

                    rotate_right(checker_A);
                }

                check_dad->color = 0;
                check_grand->color = 1;

                rotate_left(check_grand);
            }
        }
    }

    root->color = 0;
}

node *rotate_right(node *checker_A){
    node *checker_B = checker_A->left;

    checker_B->father = checker_A->father;

    node *check_dad = checker_A->father;

    if(checker_A == check_dad->left){
        check_dad->left = checker_B;
    }

    else{
        check_dad->right = checker_B;
    }

    checker_A->father = checker_B;

    if(checker_B->right == nulo){
        checker_A->left = nulo;
    }

    else{
        (checker_B->right)->father = checker_A;
        checker_A->left = checker_B->right;
    }

    checker_B->right = checker_A;

    if(root == checker_A){
        root = checker_B;
    }

    return checker_B;
}

node *rotate_left(node *checker_A){
    node *checker_B = checker_A->right;

    checker_B->father = checker_A->father;

    node *check_dad = checker_A->father;

    if(checker_A == check_dad->left){
        check_dad->left = checker_B;
    }

    else{
        check_dad->right = checker_B;
    }

    checker_A->father = checker_B;

    if(checker_B->left == nulo){
        checker_A->right = nulo;
    }

    else{
        (checker_B->left)->father = checker_A;
        checker_A->right = checker_B->left;
    }

    checker_B->left = checker_A;

    if(root == checker_A){
        root = checker_B;
    }

    return checker_B;
}

node *find_node(int num, node *checker){
    if(checker == nulo){
        cout << "No se encuentra este nodo.\n" << endl;
        return nulo;
    }

    if(num == checker->value){
        cout << "Encontrado. Valor: " << checker->value << "\n" << endl;
        return checker;
    }

    if(num < checker->value){
        return find_node(num, checker->left);
    }

    if(num > checker->value){
        return find_node(num, checker->right);
    }
}

node *add_node(int num, node *checker){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->right = nulo;
    nuevo->left = nulo;
    nuevo->color = 1;

    if(root == nulo){
        root = nuevo;
        root->father = nulo;
        root->color = 0;

        cout << "Nodo y raíz agregada.\n" << endl;
        return root;
    }

    else{
        if(num < checker->value){
            if(checker->left ==  nulo){
                cout << "1A\n";
                nuevo->father = checker;
                checker->left = nuevo;

                fixup(nuevo);
                cout << "A. Nodo agregado.\n" << endl;
                return checker->left;
            }

            else{
                cout << "1B\n";
                return add_node(num, checker->left);
            }
        }

        else{
            if(checker->right ==  nulo){
                cout << "2A\n";
                nuevo->father = checker;
                checker->right = nuevo;

                fixup(nuevo);
                cout << "B. Nodo agregado.\n" << endl;
                return checker->right;
            }

            else{
                cout << "2B\n";
                return add_node(num, checker->right);
            }
        }
    }
}
