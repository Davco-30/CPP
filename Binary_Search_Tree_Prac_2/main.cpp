#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *right;
    node *left;
};

node *root = NULL;

void add_node(int num);
node *find_pointer(int num, node *checker);

int main()
{
    add_node(8);
    add_node(11);
    add_node(12);
    add_node(7);
    add_node(1);
    add_node(63);
    add_node(18);

    node *result = find_pointer(64, root);

    if(result != NULL){
        cout << "YES\n";
        cout << result->value;
    }

    else{
        cout << "NO\n";
    }

    return 0;
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

void add_node(int num){
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

                checker = checker->left;
            }

            else{
                if(checker->right == NULL){
                    checker->right = nuevo;
                    break;
                }

                checker = checker->right;
            }

        }
    }

    nuevo->left = NULL;
    nuevo->right = NULL;
}
