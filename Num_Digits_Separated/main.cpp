#include <iostream>

using namespace std;
///Problema: Leer un entero e imprimir todos sus dígitos separados por un espacio
///2320: 2 3 2 0    4: 4

int main()
{
    int n;
    cin >> n;

    int n_2 = n;

    int digits = 0;

    while(n_2 > 0){
        n_2 = n_2/10;
        digits++;
    }

    int array_1[digits];

    for(int i = 0; i < digits; i++){
        int number = (n % 10);
        n = n / 10;
        array_1[i] = number;
    }

    for(int i = digits - 1; i >= 0; i--){
        cout << array_1[i] << " ";
    }

    return 0;
}
