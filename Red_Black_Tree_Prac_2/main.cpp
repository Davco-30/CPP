#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;

    node *father;
    int color;
};

node *root = NULL;

///Añadir nodo
void add_node(int num, node *checker);
///Encontrar apuntador
node *find_pointer(int num, node *checker);
void right_rotate(node *checker_1);

int main()
{
    add_node(8,root);
    add_node(10,root);
    add_node(17,root);
    add_node(6,root);

    node *result = find_pointer(17, root);

    cout << result->value << " " << (result->father)->value << endl;

    return 0;
}

void right_rotate(node *checker_1){
    ///Nodo A
    node *checker_2 = checker_1->left;

    checker_1->father = checker_2;

    if(checker_1 == root){
        root = checker_2;
        checker_2->father = NULL;
    }

    checker_1->left = checker_2->right;
    checker_1->father = checker_2;

    checker_2->right = checker_1;
    (checker_2->right)->father = checker_1;
    checker_2->father = NULL;
}

node *find_pointer(int num, node *checker){
    if(checker == NULL){
        return NULL;
    }

    if(checker->value == num){
        return checker;
    }

    if(num < checker->value){
        find_pointer(num, checker->left);
    }

    if(num > checker->value){
        find_pointer(num, checker->right);
    }
}

void add_node(int num, node *checker){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->left = NULL;
    nuevo->right = NULL;

    if(root == NULL){
        root = nuevo;
        root->father = NULL;
    }

    else{
        if(num < checker->value){
            if(checker->left == NULL){
                checker->left = nuevo;
                nuevo->father = checker;
            }

            else{
                add_node(num, checker->left);
            }
        }

        else{
            if(checker->right == NULL){
                checker->right = nuevo;
                nuevo->father = checker;
            }  else{
                add_node(num, checker->right);
            }
        }
    }


}
