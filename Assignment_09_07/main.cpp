#include <iostream>

using namespace std;

///1. Dado un arreglo de n numéros, imprimir todos los números primos del arreglo
/// Saber cuantos números primos hay

int num_mult(int n_prime);

int main()
{
    int n;

    cout << "Por favor, introduce un número.\n";
    cin >> n;

    cout << "\n";

    int array_1[n];

    cout << "Ahora, introduce más números, dependiendo del número que acabas de introducir.\n";

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    /*int num_small = INT_MIN;

    for(int i = 0; i < n; i++){
        if(array_1[i] > num_small){
            num_small = array_1[i];
        }
    }*/


    int n_prime = 0;

    for(int i = 0; i < n; i++){
        /*int n_mult = 0;

        for(int j = 1; j <= array_1[i]; j++){

            if(array_1[i] % j == 0){
                n_mult = n_mult + 1;
            }

        }*/

        if(num_mult(array_1[i]) == 2){
            n_prime = n_prime + 1;
        }

    }

    //cout << num_mult(n_prime) << "\n";

    cout << "\nLa cantidad de números primos que hay en el arreglo es: " << n_prime << endl;

    cout << "\n";

    int n_prime2 = n_prime;
    int array_prime[n_prime];

    for(int i = 0; i < n; i++){
        /*int n_mult = 0;

        for(int j = 1; j <= array_1[i]; j++){

            if(array_1[i] % j == 0){
                n_mult = n_mult + 1;
            }

        }*/

        if(num_mult(array_1[i]) == 2){
            n_prime = n_prime - 1;
            array_prime[n_prime] = array_1[i];
        }
    }

    cout << "Los números primos son:\n";

    for(int i = 0; i < n_prime2; i++){
        cout << array_prime[i] << "\n";
    }

    return 0;
}

int num_mult(int n_prime){
    int n_mult = 0;

    for(int j = 1; j <= n_prime; j++){

        if(n_prime % j == 0){
            n_mult = n_mult + 1;
        }

    }

    return n_mult;
}

