#include <iostream>

using namespace std;

class node{
public:
    int value;
    node *next;
};

node *head = NULL;

void add_node(int num);
void show_list(node *checker);
void bubble_sort(node *checker, node *checker_2, int flag);
void inverted_list();

int main()
{
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);
    add_node(rand()%15);

    show_list(head);

    cout << endl;

    bubble_sort(head, head->next, 0);

    cout << endl;

    show_list(head);

    return 0;
}

void bubble_sort(node *checker, node *checker_2, int flag){
    if(checker_2 != NULL){
        if(checker->value > checker_2->value){
            flag = 1;
            int num = checker->value;
            checker->value = checker_2->value;
            checker_2->value = num;
        }
        bubble_sort(checker->next, checker_2->next, flag);
    }

    else{
        if(flag == 0){
            cout << "HECHO\n";
        }

        else{
            bubble_sort(head, head->next, 0);
        }
    }
}

void show_list(node *checker){
    if(checker != NULL){
        cout << checker->value << " ";
        show_list(checker->next);
    }
}

void add_node(int num){
    node *nuevo = new node;
    nuevo->value = num;

    if(head == NULL){
        nuevo->next = NULL;
    }

    else{
        nuevo->next = head;
    }

    head = nuevo;
}
