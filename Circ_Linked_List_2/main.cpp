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
void check_list();
///Función: Conseguir el valor en donde nos posicionamos en la lista
int get_position(int n);
///Recibir un entero y contando a partir del inicio, quita el elemento en la posición de dicho número
void delete_node(int n);
///Recibir delete_node, pero aquí sólo elimina todas las apariciones del número que indica la posición dada.
void delete_all(int n);

int main()
{
    add_node(5);
    add_node(8);
    add_node(10);
    add_node(10);
    add_node(10);
    add_node(8);

    check_list();
    delete_all(2);
    check_list();

    /*check_list();
    delete_node(0);
    check_list();

    delete_node(3);
    check_list();

    delete_node(1001);
    check_list();*/
    return 0;
}

void delete_all(int n){
    cout << "DELETE ALL" << endl;
    node *checker = start;
    int num_nodes = 0;

    int position = get_position(n);

    for(int i = 0; i < position; i++){
        checker = checker->next;
    }

    int num = checker->value;
    cout << "Eliminate number: " << num << endl;

    for(int i = 0; i < amount; i++){
        if(checker->value == num){
            num_nodes++;
        }

        checker = checker->next;
    }

    cout << "Number of " << n << "'s: " << num_nodes << endl;

    checker = start;
    node *replacer = checker->next;

    while(num_nodes > 0){
        if(start->value == num){
            //cout << "YES1\n" << endl;
            start = start->next;
            checker = start;
            replacer = checker->next;

            num_nodes--;
            amount--;
            continue;
        }

        if(replacer->value == num){
            //cout << "YES2\n";
            amount--;
            num_nodes--;
            replacer = replacer->next;
            cout << "replacer: " << replacer->value << "\n" << endl;

            if( (replacer)->value != num){
                checker->next = replacer;
            }

            else{
                continue;
            }
        }

        checker = checker->next;
        replacer = checker->next;
    }

}

void delete_node(int n){
    node *checker = start;
    int position = get_position(n);

    if(position == 0){
        start = start->next;
        amount--;
    }

    else{
        for(int i = 0; i < position-1; i++){
            checker = checker->next;
        }

        node *replacer = checker->next;
        checker->next = replacer->next;

        amount--;
    }
}

int get_position(int n){
    if(n > amount){
        n = n%amount;
    }

    return n;
}

void check_list(){
    cout << "LIST:\n";
    //cout << "start: " << start->value << endl;
    node *checker = start;

    for(int i = 0; i < amount; i++){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void add_node(int value){;
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
