#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;

void add_node(int n);
void check();
///Crear lista sencilla y una función que reciba una posición y un número n. Tienes que hacer
///que el número n quede en la posición de la línea respectiva.
void add_node_2(int position, int n);

int main()
{
    add_node(5);
    add_node(8);
    add_node(4);
    check();

    add_node_2(0,6);
    check();
    return 0;
}

void add_node_2(int position, int n){
    node *checker = start;
    int list_size = 0;

    while(checker != NULL){
        if(list_size == 0 && position == 0){
            node *nuevo = new node;
            nuevo->value = n;
            nuevo->next = start;
            start = nuevo;
        }

        if(list_size == (position-1)){
            node *node_after = checker->next;
            node *nuevo = new node;
            nuevo->value = n;
            checker->next = nuevo;
            nuevo->next = node_after;
        }

        checker = checker->next;
        list_size++;
    }
}

void check(){
    cout << "SAMPLE:\n";
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void add_node(int n){
    node *nuevo = new node;
    nuevo->value = n;
    nuevo->next = start;
    start = nuevo;
}
