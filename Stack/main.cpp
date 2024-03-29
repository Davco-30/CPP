#include <iostream>
#include <stack>

using namespace std;
///Crear un queue usando stacks
stack<int> stack_A;
stack<int> stack_B;

void push(int num);
void print();
void pop();
int front();
int back();
int size();
bool empty();

int main()
{
    push(5);
    push(8);
    push(11);
    cout << "size: " << size() << endl;
    print();
    cout << endl;
    pop();
    push(14);
    push(78);
    print();
    cout << endl;
    cout << "size: "<< size() << endl;

    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;

    pop();
    pop();
    push(89);
    cout << "size: " << size() << endl;

    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;
    return 0;
}

void push(int num){
    stack_A.push(num);
}

void print(){
    int i = size();
    while(stack_A.size()){
        cout << "Elemento " << i << ": " << back() << endl; ///5(front) 11 23 41(back) =>
        stack_B.push(stack_A.top());
        stack_A.pop();
        i--;
    }

    while(stack_B.size()){
        stack_A.push(stack_B.top());
        stack_B.pop();
    }
}

void pop(){ ///Elimina el front
    while(stack_A.size()){
        stack_B.push(stack_A.top());
        stack_A.pop();
        /*j++;
        cout << j << " ";*/
    }

    stack_B.pop();

    while(stack_B.size()){
        stack_A.push(stack_B.top());
        stack_B.pop();
        /*j++;
        cout << j << " ";*/
    }
}

int front(){
    int j = 0;

    while(stack_A.size()){
        stack_B.push(stack_A.top());
        stack_A.pop();
        /*j++;
        cout << j << " ";*/
    }

    int front_num = stack_B.top();

    while(stack_B.size()){
        stack_A.push(stack_B.top());
        stack_B.pop();
        /*j++;
        cout << j << " ";*/
    }

    return front_num;
}

int back(){
    return stack_A.top();
}

int size(){
    return stack_A.size();
}

bool empty(){
    if(stack_A.empty()){
        return true;
    }

    return false;
}
