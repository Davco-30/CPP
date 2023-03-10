#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> fila;

    int n = 5;
    for(int i = 0; i < n; i++){
        if(fila.empty()){
            cout << "It's empty.\n";
            fila.push((i*2)-5);
            continue;
        }

        else{
            cout << "front: " << fila.front() << endl;
            cout << "back: " << fila.back() << "\n" << endl;

            for(int i = 0; i < 3; i++){
                fila.push(8);
                fila.push(16);
                fila.push(24);
            }
            ///24,8,16,24
            fila.pop();
            fila.pop();
        }
    }

    return 0;
}
