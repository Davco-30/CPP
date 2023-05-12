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

int main()
{
    insert_num(8);
    insert_num(6);
    insert_num(10);
    insert_num(5);
    insert_num(7);
    insert_num(9);
    insert_num(11);

    find_num(8);
    find_num(6);
    find_num(10);
    find_num(5);
    find_num(7);
    find_num(9);
    find_num(11);
    return 0;
}

bool find_num(int num){
    node *checker = root;

    while(checker->value != NULL){
        if(checker->value == num){
            cout << "value: " << checker->value << endl;
            return true;
        }

        else{
            if(num < checker->value){
                checker = checker->left;
            }

            else{
                checker = checker->right;
            }
        }
    }

    return false;
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
