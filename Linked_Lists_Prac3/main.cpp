#include <iostream>
///Crea un programa en el que puedas desarrolar una lista enlazada y puedas interaccionar con sus elementos

using namespace std;

class node{
    public:
        int value;
        node *next;
};

node *start;

///Mostrar lista
void show();
///Función que agrega un nuevo nodo a la lista
void add_num(int num);
///Eliminar un número del inicio
void delete_first();

int main()
{
    add_num(8);
    add_num(4);
    add_num(3);
    add_num(1);
    delete_first();
    show();
    delete_first();
    delete_first();
    show();
    return 0;
}

void show(){
    cout << "Sample:\n";
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void delete_first(){
    start = start->next;
}

void add_num(int num){
    node *new_node = new node;
    new_node->value = num;
    new_node->next = start;
    start = new_node;
}
