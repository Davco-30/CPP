#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *start = NULL;

void add_num(int num);
void check_list_1();
void check_list_2(node *checker);
void check_list_2_inv(node *checker);

int main()
{
    add_num(8);
    add_num(18);
    add_num(52);
    add_num(112);
    //check_list_1();
    //check_list_2(start);
    check_list_2_inv(start);
    return 0;
}

void check_list_2_inv(node *checker){
    if( (checker) != NULL){
        check_list_2_inv(checker->next);
        cout << checker->value << endl;
    }

}

void check_list_2(node *checker){
    if( (checker) != NULL){
        cout << checker->value << endl;
        check_list_2(checker->next);
    }

}

void check_list_1(){
    node *checker = start;

    while(checker != NULL){
        cout << checker->value << endl;
        checker = checker->next;
    }
}

void add_num(int num){
    node *nuevo = new node;
    //cout << "Nuevo: " << nuevo->value << endl;
    nuevo->value = num;
    nuevo->next = start;
    start = nuevo;
}
