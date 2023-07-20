#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
    node *previous;
};

node *start = NULL;
int amount = 0;

void add_start(int n);
void check_A();
void check_B();
void delete_start();
void delete_node(int k);

int main()
{
    add_start(1);
    add_start(2);
    add_start(3);
    add_start(4);
    add_start(5);

    delete_node(1);
    check_A();
    check_B();

    return 0;
}

void delete_node(int k){
    if(k > amount){
        k = k%amount;
    }

    if(k == 0){
        delete_start();
    }

    else{
        node *checker_1 = start;

        for(int i = 0; i < amount-1; i++){
            checker_1 = checker_1->next;
        }

        node *new_next = checker_1->next;
        checker_1->next = new_next->next;
        new_next->previous = checker_1;

        amount--;
    }
}

void delete_start(){
    amount--;
    (start->previous)->next = start->next;
    (start->next)->previous = (start->previous);
    start = start->next;
}

void check_A(){
    cout << "Sample A.\n";
    node *checker = start;

    for(int i = 0; i < amount*2; i++){
        cout << checker->value << endl;
        checker = checker->next;
    }

    cout << endl;
}

void check_B(){
    cout << "Sample B.\n";
    node *checker = start;

    for(int i = 0; i < amount*2; i++){
        cout << checker->value << endl;
        checker = checker->previous;
    }

    cout << endl;
}

void add_start(int n){
    amount++;
    node *nuevo = new node;
    nuevo->value = n;

    if(start == NULL){
        start = nuevo;
        nuevo->next = start;
        nuevo->previous = start;
    }

    else{
        nuevo->next = start->next;
        (start->next)->previous = nuevo;
        start->next = nuevo;
        nuevo->previous = start;
    }
}
