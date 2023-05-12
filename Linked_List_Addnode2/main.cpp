#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;
int amount = 0;

void add_node(int n);
void check();
///Agregar nuevo nodo en una posición específica de la lista
void add_node_2(int position, int n);
///Invertir drección de la lista
void invert_list(node *current, node *previous);

int main()
{
    add_node(5);
    add_node(6);
    add_node(7);
    add_node(8);

    add_node_2(0,2);

    add_node_2(1,3);

    add_node_2(7,4);
    check();

    invert_list(start->next, start);

    return 0;
}

void invert_list(node *current, node *previous){
    if(current != start){
        previous = current;
        current = current->next;
        invert_list(current, previous);
    }

    current->next = previous;
}

void add_node_2(int position, int n){
    if(position > amount){
        position %= amount;
    }

    node *checker = start;

    amount++;
    node *nuevo = new node;
    nuevo->value = n;

    if(position == 0){
        nuevo->next = start;
        start = nuevo;
    }

    else{
        for(int i = 0; i < position; i++){
            if(position == (i+1)){
                node *following = checker->next;

                checker->next = nuevo;
                nuevo->next = following;
                break;
            }

            checker = checker->next;
        }
    }
}

void check(){
    cout << "SAMPLE:\n";
    cout << "Amount: " << amount << endl;
    node *checker = start;

    for(int i = 0; i < amount; i++){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void add_node(int n){
    amount++;
    node *nuevo = new node;
    nuevo->value = n;

    if(start == NULL){
        start = nuevo;
        nuevo->next = start;
    }

    else{
        nuevo->next = start->next;
        start->next = nuevo;
    }
}
