#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;
};

node *root = NULL;

///Funciones
void add_node(int num, node *checker);          ///Agregar nodo.
node *find_pointer(int num, node *checker);     ///Buscar apuntador del un valor dado
node *eliminate_node(int num, node *checker);   ///Eliminar nodo de un valor dado
node *find_smallest(node *checker);                          ///Encontrar el node más pequeño

int main()
{
    add_node(8,root);
    add_node(18,root);
    add_node(7,root);

    node *result = find_pointer(8, root);
    cout << result->value;

    return 0;
}

node *find_smallest(node *checker){
    if(checker->left == NULL){
        return checker;
    }

    else{
    return find_smallest(checker->left);
    }
}

node *eliminate_node(int num, node *checker){
    if(checker == NULL){
        return NULL;
    }

    if(num < checker->value){
        checker->left = eliminate_node(num, checker->left);
    }

    if(num > checker->value){
        checker->right = eliminate_node(num, checker->right);
    }

    if(num == checker->value){
        if(checker->right == NULL && checker->left == NULL){
            checker = NULL;
            return checker;
        }

        if(checker->right == NULL && checker->left != NULL){
            return checker->left;
        }

        if(checker->right != NULL && checker->left == NULL){
            return checker->right;
        }

        if(checker->right != NULL && checker->left != NULL){

        }
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
