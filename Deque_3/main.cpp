#include <iostream>
#include <stack>

using namespace std;
///Crear un deque usando stacks

int front();
int back();
void push_front(int num);
void push_back(int num);
void pop_front();
void pop_back();
bool empty();

stack<int> stackA;
stack<int> stackB;

int main()
{
    if(empty() == true){
        cout << "Empty.\n";
    }

    push_front(5);
    push_front(8);
    push_back(9);
    push_front(74);
    push_back(22);

    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;

    pop_back();
    pop_back();
    pop_front();
    pop_front();

    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;

    return 0;
}

int front(){
    while(stackA.size()){
        stackB.push(stackA.top());
        stackA.pop();
    }

    int front_num = stackB.top();

    while(!stackB.empty()){
        stackA.push(stackB.top());
        stackB.pop();
    }

    return front_num;
}

int back(){
    return stackA.top();
}

void push_front(int num){
    while(!stackA.empty()){
        stackB.push(stackA.top());
        stackA.pop();
    }

    stackB.push(num);

    while(!stackB.empty()){
        stackA.push(stackB.top());
        stackB.pop();
    }
}

void push_back(int num){
    stackA.push(num);
}

void pop_front(){
    for(int i = 0; i < stackA.size()-1; i++){
        stackB.push(stackA.top());
        stackA.pop();
    }

    stackA.pop();

    while(!stackB.empty()){
        stackA.push(stackB.top());
        stackB.pop();
    }
}

void pop_back(){
    stackA.pop();
}

bool empty(){
    if(stackA.empty()){
        return true;
    }

    return false;
}
