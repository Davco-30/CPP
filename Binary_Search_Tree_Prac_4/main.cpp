#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *left;
    node *right;
    node *father;
};

node *nulo = NULL;
node *root = nulo;

node *add_node(int num, node *checker);
node *find_node(int num, node *checker);
node *delete_node(int num, node *checker);
node *smallest_node_right(node *checker);
node *biggest_node_left(node *checker);
void node_description(node *checker);

int main()
{
    int input;
    while(true){
        cout << "- Menú\n";
        cout << "1. Agregar un nodo." << endl;
        cout << "2. Buscar un nodo." << endl;
        cout << "3. Eliminar un nodo." << endl;
        cout << "0. Salir" << endl;

        cout << "\nRespuesta: ";
        cin >> input;
        cout << endl;

        if(input == 1){
            cout << "OPCIÓN 1.\nIngresa el valor del nodo." << endl;

            int number;
            cin >> number;
            add_node(number, root);
        }

        else if(input == 2){
            cout << "OPCIÓN 2.\nIngresa el valor del nodo." << endl;

            int number;
            cin >> number;
            find_node(number, root);
        }

        else if(input == 3){
            cout << "OPCIÓN 3.\nIngresa el valor del nodo." << endl;

            int number;
            cin >> number;
            cout << delete_node(number, root) << endl;
        }

        else if(input == 0){
            cout << "SALISTE" << endl;
            break;
        }

        else{
            cout << "NO VALIDO.\n" << endl;
        }
    }
    return 0;
}

node *biggest_node_left(node *checker){
    if(checker->right != nulo){
        return biggest_node_left(checker->right);
    }

    else{
        return checker;
    }
}

node *smallest_node_right(node *checker){
    if(checker->left != nulo){
        return smallest_node_right(checker->left);
    }

    else{
        return checker;
    }
}

node *delete_node(int num, node *checker){
    if(checker == nulo){
        return nulo;
    }

    if(num < checker->value){
        return delete_node(num, checker->left);
    }

    if(num > checker->value){
        return delete_node(num, checker->right);
    }

    if(num == checker->value){
        if(checker->left == nulo && checker->right == nulo){
            node *parent = checker->father;

            if(checker == parent->right){
                parent->right = nulo;
            }

            else if(checker == parent->left){
                parent->left = nulo;
            }

            cout << "1. ELIMINADO.\n" << endl;
            return nulo;
        }

        else if(checker->left != nulo && checker->right == nulo){
            node *parent = checker->father;
            node *new_son = checker->left;

            if(checker == parent->right){
                parent->right = checker->left;
            }

            else if(checker == parent->left){
                parent->left = checker->left;
            }

            (checker->left)->father = parent;
            checker->father = nulo;

            cout << "2A. ELIMINADO.\n" << endl;
            return new_son;
        }

        else if(checker->left == nulo && checker->right != nulo){
            node *parent = checker->father;
            node *new_son = checker->right;

            if(checker == parent->right){
                parent->right = checker->right;
            }

            else if(checker == parent->left){
                parent->left = checker->right;
            }

            (checker->right)->father = parent;
            checker->father = nulo;

            cout << "2B. ELIMINADO.\n" << endl;
            return new_son;
        }

        else if(checker->left != nulo && checker->right != nulo){
            node *replacement = smallest_node_right(checker->right);

            int new_num = replacement->value;

            replacement->value = checker->value;
            checker->value = new_num;

            cout << "REEMPLAZO REQUERIDO.\n" << endl;
            delete_node(num, replacement);
        }
    }
}

node *find_node(int num, node *checker){
    if(checker == nulo){
        cout << "NO EXISTE.\n" << endl;
        return nulo;
    }

    if(checker->value == num){
        cout << "ENCONTRADO.\n" << endl;
        node_description(checker);

        return checker;
    }

    if(num < checker->value){
        return find_node(num, checker->left);
    }

    if(num > checker->value){
        return find_node(num, checker->right);
    }
}

node *add_node(int num, node *checker){     ///O(h) h:Altura del árbol, Memoria
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->left = nulo;
    nuevo->right = nulo;

    if(root == nulo){
        cout << "NODO Y RAÍZ AGREGADA.\n" << endl;
        root = nuevo;
        root->father = nulo;
    }

    else{
        if(num < checker->value){
            if(checker->left == nulo){
                cout << "NODO AGREGADO.\n" << endl;
                checker->left = nuevo;
                nuevo->father = checker;
                return nuevo;
            }

            else{
                return add_node(num, checker->left);
            }
        }

        else{
            if(checker->right == nulo){
                cout << "NODO AGREGADO.\n" << endl;
                checker->right = nuevo;
                nuevo->father = checker;
                return nuevo;
            }

            else{
                return add_node(num, checker->right);
            }
        }
    }
}

void node_description(node *checker){
    cout << "CARACTERÍSTICAS DE ";

    if(checker == root){
        cout << "LA RAÍZ DEL ÁRBOL:" << endl;
    }

    else{
        cout << "NODO:" << endl;
    }

    cout << "+ Valor: " << checker->value << endl;
    cout << "+ Hijo derecho: ";

    if(checker->right == nulo){
        cout << "NULO." << endl;
    }

    else{
        cout << checker->right->value << endl;
    }

    cout << "+ Hijo izquierdo: ";

    if(checker->left == nulo){
        cout << "NULO." << endl;
    }

    else{
        cout << checker->left->value << endl;
    }

    cout << "+ Padre del nodo: ";

    if(checker->father == nulo){
        cout << "NULO." << "\n" << endl;
    }

    else{
        cout << checker->father->value << "\n" << endl;
    }
}
