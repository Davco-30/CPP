#include <iostream>
///Creación de una lista enlazada

using namespace std;

class nodo{
    public:
        int valor;
        nodo *siguiente;
};

nodo *inicio;

void insert_num(int n);
void print();

int main()
{
    insert_num(8);
    insert_num(71);
    insert_num(89);
    print();
    print();
    return 0;
}

void print(){
    nodo *checker = inicio;
    while(checker != NULL){
        cout << (checker->valor) << endl;
        checker = checker->siguiente;
    }
}

void insert_num(int n){
    if(inicio == NULL){
        nodo *nuevo = new nodo;
        nuevo->valor = n;
        nuevo->siguiente = NULL;
        inicio = nuevo;
    }

    else{
        nodo *nuevo = new nodo;
        nuevo->valor = n;
        nuevo->siguiente = inicio;
        inicio = nuevo;
    }
}
