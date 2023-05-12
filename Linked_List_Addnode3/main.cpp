#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
    node *previous;
};

node *start = NULL;
node *ending = NULL;

void add_start(int num);
void add_end(int num);
void check_A();
void check_B();
///Función que recibe un no. n y un no. p. Inserta el no. n en la posición p.
void add_node_B(int n, int p);
///Función que reciba la posición de un nodo e intercambie ese nodo con el final de la lista
void change_ending(int p);

int main()
{
    add_start(4);
    add_start(3);
    add_start(2);
    add_start(1);

    check_A();

    /*change_ending(2);
    check_A();
    check_B();*/

    cout << "Change:\n";
    change_ending(1);
    check_A();
    check_B();

    /*check_A();

    add_node_B(7,4);
    add_node_B(6,4);
    check_A();*/

    /*add_start(20);
    add_end(2);
    add_node_B(21,4);

    check_B();

    check_A();*/

    return 0;
}

void change_ending(int p){
    node *checker = start;

    for(int i = 0; i < p; i++){
        checker = checker->next;
    }


    if(checker->next == ending){
        node *checker_prev = checker->previous;
        checker_prev->next = ending;

        checker->next = NULL;
        ending->previous = checker->previous;
        checker->previous = ending;
        ending->next = checker;
    }

    else{
        node *checker_prev = checker->previous;
        node *checker_next = checker->next;
        node *penultimate = ending->previous;

        checker_prev->next = ending;
        checker_next->previous = ending;
        penultimate->next = checker;

        ending->next = checker->next;
        checker->next = NULL;
        ending->previous = checker_prev;
        checker->previous = penultimate;
    }

    ending = checker;
}

void add_node_B(int n, int p){
    node *checker = start;

    if(p == 0){
        add_start(n);
    }

    else{
        for(int i = 0; i < p-1; i++){
            checker = checker->next;
        }

        if( (checker->next) == NULL){
            add_end(n);
        }

        else{
            node *checker_2 = checker->next;

            /*cout << "Checker_1: " << checker->value << endl;
            cout << "Checker_2: " << checker_2->value << endl;*/

            node *nuevo = new node;
            nuevo->value = n;
            nuevo->next = checker_2;
            nuevo->previous = checker;

            checker->next = nuevo;
            checker_2->previous = nuevo;
        }
    }
}

void check_B(){
    cout << "Sample B.\n";
    node *checker = ending;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->previous;
    }
}

void check_A(){
    cout << "Sample A.\n";
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }

}

void add_end(int num){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->next = NULL;

    if(ending == NULL){
        nuevo->previous = NULL;
        start = nuevo;
        ending = nuevo;
    }

    else{
        nuevo->previous = ending;
        ending->next = nuevo;
        ending = nuevo;
    }

}

void add_start(int num){
    node *nuevo = new node;
    nuevo->value = num;
    nuevo->next = start;

    if(start == NULL){
        nuevo->previous = NULL;
        start = nuevo;
        ending = nuevo;
    }

    else{
        start->previous = nuevo;
        nuevo->previous = NULL;
        start = nuevo;
    }

}
