#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *left;
    node *right;
};

node *root = NULL;

void insert_num(int num);
///Crear la función find para encontrar un valor en el árbol. Función booleana
bool find_num(int num);
///Función: Encontrar el número o el número más cercano hacia arriba
int lower_bound_BT(int num);
///Función de insert_num que trabaja de forma rerusiva
void insert_num_rec(int num, node *actual);
///Crear nodo
node *create_node(int num);
///find_num recursivo.
bool find_num_rec(int num, node *actual);
///Tree traversals || Revisar
void pre_order(node *checker);
void in_order(node *checker);
void post_order(node *checker);
///Función Invertir árbol.
void invert_tree(node *checker);

int main()
{
    insert_num(9);
    insert_num(5);
    insert_num(3);
    insert_num(4);
    insert_num(2);
    insert_num(2);
    insert_num(1);
    insert_num(15);
    insert_num(12);
    insert_num(11);
    insert_num(14);
    insert_num(18);
    insert_num(20);
    insert_num(18);

    //cout << ""Pre-Order:" << endl;
    //pre_order(root);

    ///Revisar
    /*cout << "In-Order:" << endl;
    in_order(root);
    cout << "Post-Order:" << endl;
    post_order(root);*/

    invert_tree(root);

    cout << "Pre-Order:" << endl;
    pre_order(root);

    return 0;
}

void invert_tree(node *checker){
    node *left_original = checker->left;
    checker->left = checker->right;
    checker->right = left_original;

    if(checker->left != NULL){
        invert_tree(checker->left);
    }

    if(checker->right != NULL){
        invert_tree(checker->right);
    }
}

void in_order(node *checker){
    if(checker->left != NULL){
        in_order(checker->left);
    }

    if(checker->right != NULL){
        in_order(checker->right);
    }

    cout << checker->value << endl;
}

void post_order(node *checker){
    if(checker->right != NULL){
        post_order(checker->right);
    }

    if(checker->left != NULL){
        post_order(checker->left);
    }

    cout << checker->value << endl;
}

void pre_order(node *checker){
    cout << checker->value << endl;

    if(checker->left != NULL){
        pre_order(checker->left);
    }

    if(checker->right != NULL){
        pre_order(checker->right);
    }
}

node *create_node(int num){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->left = NULL;
    nuevo->right = NULL;

    return nuevo;
}

bool find_num_rec(int num, node *actual){
    if(actual == NULL){
        return false;
    }

    if(actual->value == num){
        return true;
    }

    else{
        if(actual->value < num){
            return find_num_rec(num, actual->left);
        }

        else{
            return find_num_rec(num, actual->right);
        }
    }
}

void insert_num_rec(int num, node *actual){
    if(root == NULL){
        node *nuevo = create_node(num);
        root = nuevo;
    }

    else{
        if(num < actual->value){
            if(actual->left == NULL){
                node *nuevo = create_node(num);
                actual->left = nuevo;
            }

            else{
                insert_num_rec(num, actual->left);
            }
        }

        else{
            if(actual->right == NULL){
                node *nuevo = create_node(num);
                actual->right = nuevo;
            }

            else{
                insert_num_rec(num, actual->right);
            }
        }
    }
}

bool find_num(int num){
    node *checker = root;

    if(root == NULL){
        return false;
    }

    else{
        while(checker->value != NULL){
            if(checker->value == num){
                cout << "value: " << checker->value << endl;
                return true;
            }

            else{
                if(num < checker->value && checker->left != NULL){
                    checker = checker->left;
                }

                else if(num >= checker->value && checker->right != NULL){
                    checker = checker->right;
                }

                else{
                    cout << "Not found." << endl;
                    break;
                }
            }
        }

        return false;
    }
}

void insert_num(int num){
    node *nuevo = new node;
    nuevo->value = num;

    if(root == NULL){
        root = nuevo;
    }

    else{
        node *checker = root;

        while(true){
            if(num < checker->value){
                if(checker->left == NULL){
                    checker->left = nuevo;
                    break;
                }

                else{
                    checker = checker->left;
                }
            }

            else{
                if(checker->right == NULL){
                    checker->right = nuevo;
                    break;
                }

                else{
                    checker = checker->right;
                }
            }
        }
    }

    nuevo->left = NULL;
    nuevo->right = NULL;
}
