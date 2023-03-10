#include <iostream>

using namespace std;

int pila[1000];
int num_top = 0;

void push(int num);
void pop();
int top();
int size();
bool empty();

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 1){
            push(num);
        }

        else{
            if(empty() == 1){
                cout << "A. Está mal";
                return 0;
            }

            else{
                pop();
            }
        }
    }

    if(empty() == 1){
        cout << "Está bien";
    }

    else{
        cout << "B. Está mal";
    }
    return 0;
}

void push(int num){
    num_top++;
    pila[num_top] = num;
}

void pop(){
    pila[num_top] == 0;
    num_top--;
}

int top(){
    return pila[num_top];
}

int size(){
    return num_top;
}

bool empty(){
    if(num_top == 0){
        return true;
    }

    return false;
}
