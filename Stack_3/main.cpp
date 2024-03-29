#include <bits/stdc++.h>

using namespace std;

int main()
{
    ///Ex.N n�meros que s�lo pueden ser 1's o 0's. Los 1's representan un par�ntesis de apertura ( y los 0' un par�ntesis de cierre )
    ///Dada la entrada, debes de indicar si los par�ntsis est�n balanceados o no.

    ///Caso 1: 1 0 => ()
    ///Caso 2: 1 1 0 0 1 0 => (())()
    ///Caso 3: 1 1 0 1 0 1 => (()()(
    ///Caso 4: 0 1 => )(

    int n;
    cin >> n;

    stack<int> pila;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num == 1){
            pila.push(num);
        }

        else{
            if(pila.empty()){
                cout << "A. Est� mal";
                return 0;
            }

            else{
                pila.pop();
            }
        }
    }

    if(pila.empty()){
        cout << "Est� bien";
    }

    else{
        cout << "B. Est� mal";
    }

    /*
    stack<int> pila;
    pila.push(5);
    pila.push(14);
    pila.push(23);
    pila.push(362);

    cout << pila.top() << endl;
    pila.pop();
    pila.pop();
    cout << pila.top();*/

    return 0;
}
