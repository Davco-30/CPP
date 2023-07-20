#include <iostream>

using namespace std;
///Crear 2 listas enlazadas sencillas y crear una función que pueda recibir como parámetro el inicio de las 2 listas
///y regrese el apuntador al inicio de la lista combinada

///Ambas listas están ordenadas individualmente. Combínalas de tal forma que estén ordenadas
///L1:1->5->8->10> NULL, L2: 1->7->7->11->NULL == 1->1->5->7->7->8->10->11->NULL

class node{
public:
    int value;
    node *next;
};

node *start_1 = NULL;
node *start_2 = NULL;
node *start_fusion = NULL;
node *start_order = NULL;

void add_node_1(int value);
void check_1();
void add_node_2(int value);
void check_2();
node *fuse(node *start_1, node *start_2);
void ordered_fuse();
void check_order();

int main()
{
    add_node_1(6);
    add_node_1(5);
    add_node_1(3);
    add_node_1(3);

    add_node_2(10);
    add_node_2(7);
    add_node_2(6);
    add_node_2(2);
    add_node_2(2);
    add_node_2(1);

    fuse(start_1, start_2);

    check_1();
    check_2();
    ordered_fuse();
    check_order();

    return 0;
}

void check_order(){
    cout << "SO" << endl;
    node *checker = start_order;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void ordered_fuse(){
    node *pointer = NULL;
    node *checker_1 = start_1;
    node *checker_2 = start_2;

    if(start_1->value <= start_2->value){
        start_order = start_1;
        checker_1 = start_order->next;
    }

    else{
        start_order = start_2;
        checker_2 = start_order->next;
    }

    pointer = start_order;

    while(checker_1 != NULL && checker_2 != NULL){
        cout << "Check1: " << checker_1->value << endl;
        cout << "Check2: " << checker_2->value << "\n" << endl;

        if(checker_1->value <= checker_2->value){
            pointer->next = checker_1;
            pointer = checker_1;
            checker_1 = checker_1->next;
        }

        else{
            pointer->next = checker_2;
            pointer = checker_2;
            checker_2 = checker_2->next;
        }

        if(checker_1 == NULL && checker_2 != NULL){
            pointer->next = checker_2;
            pointer = checker_2;
            checker_2 = checker_2->next;
        }

        else if(checker_1 != NULL && checker_2 == NULL){
            pointer->next = checker_1;
            pointer = checker_1;
            checker_1 = checker_1->next;
        }
    }

}

node *fuse(node *start_1, node *start_2){
    node *checker = start_1;
    int mark = 0;

    while(checker != NULL){
        node *nuevo = new node;
        nuevo->value = checker->value;
        nuevo->next = start_fusion;
        start_fusion = nuevo;

        if(checker->next == NULL && mark == 0){
            checker = start_2;
            mark = 1;
            continue;
        }

        checker = checker->next;
    }

    return start_fusion;
}

void check_2(){
    cout << "S2.\n";
    node *checker = start_2;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void add_node_2(int value){
    node *nuevo = new node;
    nuevo->value = value;
    nuevo->next = start_2;
    start_2 = nuevo;
}


void check_1(){
    cout << "S1.\n";
    node *checker = start_1;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void add_node_1(int value){
    node *nuevo = new node;
    nuevo->value = value;
    nuevo->next = start_1;
    start_1 = nuevo;
}
