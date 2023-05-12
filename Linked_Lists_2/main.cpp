#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;

void add_node(int value);
void check();
///Función: Recibe un parámetro int x y elimine todas las apariciones de x en la lista
void delete_x(int x);

int main()
{
    add_node(5);
    add_node(5);
    add_node(17);
    add_node(5);
    add_node(5);
    add_node(8);
    add_node(9);

    check();
    delete_x(5);
    /*delete_x(4);
    check();
    delete_x(14);
    check();
    delete_x(7);
    check();*/

    check();

    return 0;
}

void delete_x(int x){
    node *checker = start;
    node *redirect_to = checker->next;

    while(redirect_to != NULL){
        cout << "Checker: " << checker->value << endl;
        cout << "Redirecter: " << redirect_to->value << endl;
        if( (start->value) == x){
            start = start->next;
            checker = start;
            redirect_to = checker->next;
            continue;
        }

        if( (redirect_to->value) == x){
            if( (redirect_to->next) == NULL){
                checker->next = NULL;
                break;
            }

            redirect_to = redirect_to->next;

            if( (redirect_to->value) != x){
                checker->next = redirect_to;
            }

            else{
                continue;
            }
        }

        checker = redirect_to;
        redirect_to = checker->next;

    }
}

void add_node(int value){
    node *nuevo = new node;
    nuevo->value = value;
    nuevo->next = start;
    start = nuevo;
}

void check(){
    cout << "Sample:\n";
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << "\n" << endl;
}
