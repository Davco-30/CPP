#include <iostream>

using namespace std;

int fila[1000];
int num_front = 0;
int num_back = 0;

void push(int num);
void pop();
int front();
int back();
int size();
bool empty();

int main(){
    int n = 5;
    for(int i = 0; i < n; i++){
        if(empty() == true){
            cout << "It's empty.\n";
            push((i*2)-5);
            continue;
        }

        else{
            cout << "num_front: " << num_front << endl;
            cout << "front: " << front() << endl;
            cout << "back: " << back() << endl;

            push(8);
            push(16);
            push(24);

            ///-5,
            cout << "size: " << size() << endl;
            pop();
            pop();
            cout << "size: " << size() << "\n" << endl;

        }
    }

    return 0;
}

void push(int num){
    fila[num_back] = num;
    num_back++; //=-1
}

void pop(){
    fila[num_front] == 0;
    num_front++;
}

int front(){
    return fila[num_front];
}

int back(){
    return fila[num_back-1];
}

int size(){
    return (num_back - num_front);
}

bool empty(){
    if(num_back == 0){
        return true;
    }

    return false;
}
