#include <bits/stdc++.h>

using namespace std;

class node{
    public:
        int value;
        node *next; ///Siempre apunta a otro valor
};

node *start;
///Función: Agrega un nuevo nodo
void add_num(int n);
///Función: Checar la lista
void check();
///Función: Elimina primer nodo;
void delete_first();

int main()
{
    add_num(15);
    add_num(30);
    add_num(45);
    add_num(60);
    check();
    delete_first();
    delete_first();
    check();
    return 0;
}

void check(){
    node *checker = start;

    cout << "SAMPLE:\n";
    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

}

void delete_first(){
    start = start->next;
}

void add_num(int n){
    node *nuevo = new node;
    nuevo->value = n;
    nuevo->next = start;
    start = nuevo;
}
