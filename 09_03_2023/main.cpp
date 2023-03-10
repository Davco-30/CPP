#include <iostream>
#include <queue>

using namespace std;
///Crear un stack usando queues.
queue<int> queue_A;
queue<int> queue_B;

void print();
void push(int num);
void pop();
int top();
int size();
bool empty();

int main()
{
    ///Prubeas:
    empty();
    push(5);
    push(8);
    push(7);
    push(14);
    push(128);
    empty();
    print();

    cout << endl;

    pop();
    pop();
    pop();

    print();

    cout << "size: " << size() << endl;

    push(20);
    print();

    cout << "top: " << top() << endl;

    empty();
    return 0;
}

void print(){
    int i = 1;
    while(queue_A.size()){
        cout << "Elemento " << i << ": "<< queue_A.front() << endl; ///5 11 23 41 =>
        queue_B.push(queue_A.front());
        queue_A.pop();
        i++;
    }

    while(queue_B.size()){
        queue_A.push(queue_B.front());
        queue_B.pop();
    }
}

void push(int num){
    queue_A.push(num);
}

void pop(){ ///Elimina el top ///4 5 9 6 3
    while(size() > 1){
        queue_B.push(queue_A.front());
        queue_A.pop();
    }

    queue_A.pop();

    while(!queue_B.empty()){
        queue_A.push(queue_B.front());
        queue_B.pop();
    }
}

int top(){
    return queue_A.back();
}

int size(){
    return queue_A.size();
}

bool empty(){
    if(queue_A.empty()){
        return true;
    }

    return false;
}
