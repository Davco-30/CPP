#include <iostream>

using namespace std;

///1. Leer un número n y después leer 2 arreglos de tamaño n. Ambos arreglos serán anagramas. Con una sola excepción, en el segundo arreglo
/// habrá un único cero, debes de indicar qué número del primer arreglo no aparece en el segundo
/// Todos los números son positivos mayores a 0. Solamente hay un cero en el segundo arreglo.

int main()
{
    /// [6,8,9,3,21,4,61]
    /// [61,21,3,0,9,6,4]
    /// cout << 8;

    int n;
    cout << "Introduce un número.\n";
    cin >> n;

    int arr_A[n];
    int arr_B[n];

    cout << "Ahora introduce una cantidad de números de acuerdo al número que habías escrito.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_A[i];
    }

    cout << "Introduce otro arreglo con los mismos números del primero, pero remplaza un número con un 0.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_B[i];
    }

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            if(arr_A[i] == arr_B[j]){
                arr_A[i] = -1;
                arr_B[j] = -1;
            }

        }

    }

    for(int i = 0; i < n; i++){
        if(arr_A[i] != -1){
            cout << "\nEl número que no aparece en el segundo arreglo es: " << arr_A[i];
        }
    }

    return 0;
}
