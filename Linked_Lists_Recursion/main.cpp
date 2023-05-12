#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;

void insert_num(int n);
void check();
///Función igual a check sin ciclos
void check2(node *nodo);
///check2 con orden inverso
void check3(node *nodo);
///Crea una función que invierta la lista enlazada y devuelva un apuntador al nuevo inicio
node *change_list(node *current, node *previous);
///Función change_list correcta
node *revert_list(node *previous, node *current);

int main()
{
    insert_num(5);
    insert_num(15);
    insert_num(25);
    insert_num(40);
    insert_num(88);
    check();
    cout << "Check2:\n";
    check2(start);
    cout << "Check3:\n";
    check3(start);
    cout << "Inverted:\n";
    node *temporal = revert_list(NULL,start);
    check2(temporal);
    /*///Checar
    node *temporal = change_list(start, NULL);
    cout << temporal->value;*/
    return 0;
}

node *revert_list(node *previous, node *current){
    if(current == NULL){
        return previous;
    }

    node *temporal = revert_list(current, current->next);
    current->next = previous;
    return temporal;
}

node *change_list(node *current, node *previous){
    change_list(current, current->next);
    current->next = previous;
}

void check3(node *nodo){
    if(nodo != NULL){
        check3(nodo->next);
        cout << nodo->value << endl;
    }
}

void check2(node *nodo){
    if(nodo != NULL){
        cout << nodo->value << endl;
        check2(nodo->next);
    }
}

void check(){
    node *checker = start;

    cout << "SAMPLE:\n";

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void insert_num(int n){
    node *nuevo = new node;
    nuevo->value = n;
    nuevo->next = start;
    start = nuevo;
}
