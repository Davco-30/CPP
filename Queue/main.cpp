#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> fila;
    int n = 10;

    cout << fila.size() << endl;

    if(fila.empty()){
        fila.push(5);
        fila.push(58);
        fila.push(7);
    }

    while(n > 0){
        cout << fila.front() << " , ";
        cout << fila.back() << endl;

        fila.emplace(fila.front());
        fila.pop();
        n--;
    }
    return 0;
}
