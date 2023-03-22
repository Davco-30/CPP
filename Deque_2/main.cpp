#include <iostream>

using namespace std;
///Crear un deque usado arreglos

int front();
int back();
void push_front(int num);
void push_back(int num);
void pop_front();
void pop_back();
bool empty();

int array1[1000];
int start = 0;
int ending = 0;

int main()
{
    if(empty() == true){
        cout << "Empty.\n";
    }

    push_front(5);
    push_front(8);
    push_front(9);
    push_front(75);
    push_front(94);

    for(int i = start; i < (ending); i++){
        cout << array1[i] << endl;
    }

    cout << endl;

    cout << "start: " << start << endl;
    cout << "ending: " << ending << endl;

    cout << endl;

    cout << "front: " << front() << endl;
    cout << "back: " << back() << endl;

    cout << endl;

    push_back(23);
    push_back(12);
    push_back(32);
    push_front(42);

    cout << endl;

    cout << "start: " << start << endl;
    cout << "ending: " << ending << endl;

    cout << endl;

    for(int i = start; i < (ending); i++){
        cout << array1[i] << endl;
    }

    pop_front();
    pop_front();
    pop_back();

    cout << endl;

    cout << "start: " << start << endl;
    cout << "ending: " << ending << endl;

    cout << endl;

    for(int i = start; i < (ending); i++){
        cout << array1[i] << endl;
    }

    cout << endl;

    return 0;
}

int front(){
    return array1[start];
}

int back(){
    return array1[ending-1];
}

void push_front(int num){
    ending++;
    for(int i = (ending-1); i >= (start); i--){
        array1[i+1] = array1[i];
        array1[i] = 0;
    }
    ///Alternativa: Start y Ending mejor empiezan ea la mitad del tamaño del arreglo.

    array1[start] = num;
}

void push_back(int num){
    array1[ending] = num;
    ending++;
}

void pop_front(){
    array1[start] = 0;
    start++;
}

void pop_back(){
    array1[ending] = 0;
    ending--;
}

bool empty(){
    if((ending-start) == 0){
        return true;
    }

    return false;
}
