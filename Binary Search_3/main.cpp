#include <iostream>

using namespace std;
///Leer n y n números (estos estarán ordenados de menor a mayor) y después leerás un número k. Debes de encontrar si
///el número k se encuentra en el arreglo.

int main()
{
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    int start = 0;
    int finish = n-1;

    int k;
    cin >> k;

    ///Binary Search
    while((start+1) < finish){
        int num = (start + finish)/(2); ///Posición intermedia

        if(array_1[num] >= k){
            finish = num;
        }

        else{
            start = num;
        }
    }

    cout << start << " " << finish << "\n";

    if(array_1[start] == k){
        cout << k << " está en la posición " << start;
    }

    else if(array_1[finish] == k){
        cout << k << " está en la posición " << finish;
    }

    else{
        cout << k << " no está.";
    }

    return 0;

}
