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
node *find_pointer(int num, node *pointer);
node *find_smallest(node *pointer);

int main()
{
    add_node(8);
    add_node(7);
    add_node(6);
    add_node(12);
    add_node(11);
    add_node(10);
    add_node(2);
    add_node(3);

    //node *result = find_pointer(10, root);
    //node *result = find_pointer(6, root);
    //node *result = find_pointer(17, root);
    node *result = find_smallest(root);

    if(result != NULL){
        cout << result->value << endl;
    }

    else{
        cout << "No está" << endl;;
    }

    return 0;
}

node *find_smallest(node *pointer){
    if(pointer == NULL){
        return nullptr;
    }

    if( (pointer->left) == NULL){
        return pointer;
    }

    else{
        return find_smallest(pointer->left);
    }
}

node *find_pointer(int num, node *pointer){
    if(pointer == NULL){
        return NULL;
    }

    if(num < pointer->value){
        return find_pointer(num, pointer->left);
    }

    if(num > pointer->value){
        return find_pointer(num, pointer->right);
    }

    if(num == pointer->value){
        return pointer;
    }
}

void add_node(int num){
    node *nuevo = new node;
    nuevo->value = num;

    if(root == NULL){
        root = nuevo;
    }

    else{
        node *checker= root;

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

    nuevo->right = NULL;
    nuevo->left = NULL;
}
