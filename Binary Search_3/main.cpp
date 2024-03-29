#include <iostream>

using namespace std;
///Leer n y n n�meros (estos estar�n ordenados de menor a mayor) y despu�s leer�s un n�mero k. Debes de encontrar si
///el n�mero k se encuentra en el arreglo.

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
        int num = (start + finish)/(2); ///Posici�n intermedia

        if(array_1[num] >= k){
            finish = num;
        }

        else{
            start = num;
        }
    }

    cout << start << " " << finish << "\n";

    if(array_1[start] == k){
        cout << k << " est� en la posici�n " << start;
    }

    else if(array_1[finish] == k){
        cout << k << " est� en la posici�n " << finish;
    }

    else{
        cout << k << " no est�.";
    }

    return 0;

}
