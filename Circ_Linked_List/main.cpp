#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;
int amount = 0;

void add_node(int value);
void check();
void delete_start();


int main()
{
    add_node(1);
    add_node(2);
    add_node(3);
    add_node(4);

    check();

    delete_start();
    delete_start();
    delete_start();

    check();
    return 0;
}

void delete_start(){
    start = start->next;
    node *checker = start;
    amount--;

    for(int i = 0; i < amount; i++){
        checker = checker->next;
    }

    checker->next = start;
}

void check(){
    node *checker = start;

    cout << "Start: " << checker->value << "\nLista:" << endl;

    for(int i = 0; i < amount; i++){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void add_node(int value){
    amount++;
    node *nuevo = new node;
    nuevo->value = value;

    if(start == NULL){
        start = nuevo;
        nuevo->next = start;
    }

    else{
        nuevo->next = start->next;
        start->next = nuevo;
    }
}
