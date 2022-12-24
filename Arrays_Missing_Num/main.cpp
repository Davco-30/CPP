#include <iostream>

using namespace std;

///1. Dado un arreglo de tamaño 9 que contiene todos los números del 0 al 9, faltando solamente uno, imprime qué número hace falta.
///1A. Usar todas las herramientas que necesite.
///1B. Sólo usar ciclos. Sin condiciones.

int main()
{
    ///[9,0,1,2,4,5,8,3,7]
    ///cout << "6";

    /*
    ///1A
    int arr_A[] = {0,1,2,3,4,5,6,7,8,9};

    int arr_B[9];
    cout << "Introduce un arreglo que contenga números del 0 al 9 con excepción de uno solamente.\n";

    for(int i = 0; i < 9; i++){
        cin >> arr_B[i];
    }

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 9; j++){
            if(arr_B[j] == arr_A[i]){
                arr_A[i] = -1;
                arr_B[j] = -1;
            }
        }

    }

    cout << "\n";

    /*for(int i = 0; i < 9; i++){
        cout << arr_B[i] << " ";
    }

    cout << "\n";

    for(int i = 0; i < 10; i++){
        cout << arr_A[i] << " ";
    }

    for(int i = 0; i <= 9; i++){
        if(arr_A[i] != -1){
            cout << "\nEl número que no aparece en el arreglo es: " << arr_A[i];
        }
    }
    */

    ///1B

    int arr_B[9];

    cout << "Introduce un arreglo que contenga números del 0 al 9 con excepción de uno solamente.\n";

    for(int i = 0; i < 9; i++){
        cin >> arr_B[i];
    }

    int result = 45;

    for(int i = 0; i < 9; i++){
        result = result - arr_B[i];
    }

    cout << "\nEl número que no aparece en el arreglo es: " << result;

    return 0;
}
