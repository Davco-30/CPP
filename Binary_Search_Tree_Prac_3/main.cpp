#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;
};

node *root = NULL;

node *add_node(int num, node *checker);
node *find_node(int num, node *checker);

int main()
{
    add_node(8,root);
    add_node(10,root);
    add_node(7,root);
    add_node(11,root);
    add_node(6,root);

    find_node(8, root);
    find_node(1, root);
    find_node(10, root);
    find_node(1, root);
    find_node(7, root);
    find_node(1, root);
    find_node(11, root);
    find_node(1, root);
    find_node(6, root);

    return 0;
}

node *find_node(int num, node *checker){
    if(checker->value == num){
        cout << "NODE FOUND." << endl;
        return checker;
    }

    if(checker == NULL){
        return NULL;
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
    nuevo->right = NULL;
    nuevo->left = NULL;

    if(root == NULL){
        root = nuevo;
        return root;
    }

    else{
        if(num < checker->value){
            if(checker->left ==  NULL){
                checker->left = nuevo;
                return checker->left;
            }

            else{
                return add_node(num, checker->left);
            }
        }

        else{
            if(checker->right ==  NULL){
                checker->right = nuevo;
                return checker->right;
            }

            else{
                return add_node(num, checker->right);
            }
        }
    }
}
