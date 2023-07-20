#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;
};

node *root = NULL;

void add_node(int num, node *checker);
node *find_pointer(int num, node *checker);
///Función de eliminación
node *eliminate_node(int num, node *checker);
node *find_smallest(node *checker);
///Funció que busque un núm y diga si está o no
void find_num(int num, node *checker);

int main()
{
    ///Crear el siguiente sistema:
    ///Te prguntará que vas a hacer: insertar un valor, buscar un valor o eliminarlo
    ///Lo seguirá repitiendo indefinidamente.

    add_node(7, root);
    add_node(9, root);
    add_node(8, root);
    add_node(10, root);
    add_node(5, root);
    add_node(4, root);

    while(true){
        cout << "Opciones de tu árbol:\n";
        cout << "a) Insertar valor.\n" << "b) Eliminar un valor.\n" << "c) Buscar un valor.\n";

        char answer;
        cin >> answer;

        int num;
        cout << "Inserta tu valor.\nValor: ";
        cin >> num;

        if(answer == 'a'){
            add_node(num,root);
            cout << num << " AGREGADO";
        }

        else if(answer == 'b'){
            eliminate_node(num, root);
            root = eliminate_node(num, root);
        }

        else if(answer == 'c'){
            find_num(num, root);
        }

        else{
            cout << "No Válido" << endl;
        }

        cout << "\n" << endl;
    }

    return 0;
}

void find_num(int num, node *checker){
    if(root == NULL){
        cout << "No existe el árbol." << endl;
    }

    else{
        if(checker->value == num){
            cout << "Sí existe el valor.\n";
        }

        if(num < checker->value){
            if(checker->left == NULL){
                cout << "No está el valor.\n";
            }

            else{
                find_num(num, checker->left);
            }
        }

        if(num > checker->value){
            if(checker->right == NULL){
                cout << "No está el valor.\n";
            }

            else{
                find_num(num, checker->right);
            }
        }
    }
}

node *eliminate_node(int num, node *checker){
    if(checker == NULL){
        return NULL;
    }

    //cout << "checker: " << checker->value << " num: " << num << endl;

    if(num < checker->value){
        checker->left = eliminate_node(num, checker->left);
        return checker;
    }

    if(num > checker->value){
        checker->right = eliminate_node(num, checker->right);
        return checker;
    }

    if(num == checker->value){
        if(checker->left == NULL && checker->right == NULL){
            cout << "1. ELIMINADO" << endl;
            return NULL;
        }

        if(checker->left != NULL && checker->right == NULL){
            cout << "2. ELIMINADO" << endl;
            return checker->left;
        }

        if(checker->left == NULL && checker->right != NULL){
            cout << "3. ELIMINADO" << endl;
            return checker->right;
        }

        if(checker->left != NULL && checker->right != NULL){
            node *replaced = find_smallest(checker->right);

            checker->value = replaced->value;
            checker->right = eliminate_node(replaced->value, checker->right);

            cout << "4. ELIMINADO" << endl;
            return checker;
        }

    }
}

node *find_smallest(node *checker){
    if(checker->left == NULL){
        return checker;
    }

    else{
        return find_smallest(checker->left);
    }
}

node *find_pointer(int num, node *checker){
    if(checker == NULL){
        return NULL;
    }

    if(checker->value == num){
        return checker;
    }

    if(num < checker->value){
        return find_pointer(num, checker->left);
    }

    if(num > checker->value){
        return find_pointer(num, checker->right);
    }
}

void add_node(int num, node *checker){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->right = NULL;
    nuevo->left = NULL;

    if(root == NULL){
        root = nuevo;
    }

    else{
        if(num < checker->value){
            if(checker->left == NULL){
                checker->left = nuevo;
            }

            else{
                add_node(num, checker->left);
            }
        }

        else{
            if(checker->right == NULL){
                checker->right = nuevo;
            }

            else{
                add_node(num, checker->right);
            }
        }
    }
}
