#include <iostream>

using namespace std;
///Recibir una lista enlazada ordenada y crea una función que elimine los elementos repetidos
///Recibir una lista enlazada y crea una función que elimine los elementos en posición par.
///Recibir una lista enlazada y crea una función que pasa al final los elementos en posición par.
///Recibir una lista enlazada y crea una función que pasa al final los elementos en posición par en orden invertido.

class node{
public:
    int value;
    node *next;
};

void add_node(int n);
void check();
void single_values_1();
void odd_list();
void odd_list_2();

node *start = NULL;
int max_value = 0;

int main()
{
    add_node(7);
    add_node(6);
    add_node(5);
    add_node(4);
    add_node(3);
    add_node(2);
    add_node(1);

    check();

    odd_list_2();
    check();

    return 0;
}

void odd_list_2(){
    node *shifter = start;
    node *mark = shifter;
    node *ending = shifter;
    int i = 1;

    while(shifter->next != NULL){
        if( (shifter->next)->next == NULL && i%2 != 0){
            ending = shifter->next;
            mark = shifter;
        }

        else if( (shifter->next)->next == NULL && i%2 == 0){
            ending = shifter;
            mark =shifter->next;
        }

        shifter = shifter->next;
        i++;
    }

    node *checker = start;
    node *following = checker->next;

    while(following != mark){
        shifter->next = following;
        shifter = shifter->next;
        shifter->next = ending;

        following = (following->next)->next;
        checker->next = following;

        checker = checker->next;
    }

    shifter->next = NULL;

}

void odd_list(){
    start = start->next;

    node *checker = start;
    node *following = (start->next)->next;

    while(checker != NULL){
        if(following == NULL){
            checker->next = NULL;
            break;
        }

        check();
        checker->next = following;

        checker = following;
        following = (checker->next)->next;
    }
}

void single_values_1(){
    node *checker = start;
    node *following = checker->next;

    while(following != NULL){
        //cout << "C: " << checker->value << endl;
        //cout << "F: " << following->value << endl;

        if(following->value == checker->value){
            if(following->next == NULL){
                checker->next = NULL;
            }

            following = following->next;
        }

        else{
            checker->next = following;

            following = following->next;
            checker = checker->next;
        }
    }
}

/*void single_values(){
    int array_values[max_value] = {};

    node *prev = start;
    node *checker = prev->next;

    array_values[prev->value] = 1;

    while(checker != NULL){
        for(int i = 0; i < max_value; i++){
            cout << array_values[i] << " ";
        }

        cout << endl;

        if( array_values[checker->value] == 0){
            array_values[checker->value] = 1;
            checker = checker->next;
            prev = prev->next;
        }

        else{
            prev->next = checker->next;
            prev = checker->next;
            checker = prev->next;
        }

    }
}*/

void check(){
    cout << "Sample:\n";
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void add_node(int n){
    if(n > max_value){
        max_value = n;
    }

    node *nuevo = new node;
    nuevo->value = n;
    nuevo->next = start;
    start = nuevo;
}
