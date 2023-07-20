#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *left;
    node *right;
    node *father;
    int color; ///Red: 1, Black: 0
};

node *root= NULL;
node *nulo = NULL;

///Retornar un apuntador al nodo insertado
node *add_node(int num, node *checker);
node *find_node(int num, node *checker);
///Devolver el apuntador a la nueva raíz del árbol.
node *rotate_right(node *checker_A);
///Rotación izquierda, mismo return
node *rotate_left(node *checker_A);

node *fixup(node *checker_A);

void null_node();

int main()
{
    null_node();
    add_node(15,root);
    add_node(18,root);
    add_node(17,root);
    add_node(24,root);
    add_node(1,root);
    add_node(2,root);
    add_node(3,root);
    add_node(4,root);
    add_node(5,root);
    add_node(34,root);
    add_node(8,root);

    node *result = find_node(8, root);

    cout << result->value << endl;

    return 0;
}

void null_node(){
    nulo = new node;
    nulo->value = 0;
    root = nulo;
}

node *fixup(node *checker_A){
    node *check_dad = checker_A->father;
    node *check_grand = check_dad->father;

    while( check_dad->color == 1){
        ///Checker_A siempre es rojo.
        ///Si entramos al ciclo, el padre de checker  es rojo

        ///Condición: Si el padre de checker es el hijo izquierdo del abuelo.
        if( check_dad == check_grand->left ){
            node *check_uncle = check_grand->right;

            if(check_uncle->color == 1){
                check_uncle->color = 0;
                check_dad->color = 0;
                check_grand->color = 1;
                checker_A = check_grand;
            }

            ///El tío no es rojo. El padre sí lo es.
            else{
                ///Si se cumple la rotación, después de la condición, somos el hijo izquierdo
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

            ///El tío no es rojo. El padre sí lo es.
            else{
                ///Si se cumple la rotación, después de la condición, somos el hijo derecho
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

    if(checker_A == root){
        root = checker_B;
    }

    return checker_B;
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

    if(checker_A == root){
        root = checker_B;
    }

    return checker_B;
}

node *find_node(int num, node *checker){
    if(checker == nulo){
        return nulo;
    }

    if(checker->value == num){
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
    nuevo->right =  nulo;
    nuevo->left =  nulo;
    nuevo->color = 1;

    if(root == nulo){
        root = nuevo;
        root->father = nulo;
        root->color = 0;
        return root;
    }

    else{
        if(num < checker->value){
            if(checker->left ==  nulo){
                nuevo->father = checker;
                checker->left = nuevo;

                fixup(nuevo);
                return checker->left;
            }

            else{
                return add_node(num, checker->left);
            }
        }

        else{
            if(checker->right ==  nulo){
                nuevo->father = checker;
                checker->right = nuevo;

                fixup(nuevo);
                return checker->right;
            }

            else{
                return add_node(num, checker->right);
            }
        }
    }


}
