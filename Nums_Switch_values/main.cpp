#include <iostream>

using namespace std;

///1. Crea 2 variables, leelas e intercambia el valor de las 2 variables.
/// No puedes declarar ninguna otra variable o arreglo.

int main()
{
    int var_1;
    int var_2;

    cout << "Introduce el valor de una variable.\n";
    cin >> var_1;
    cout << "El valor de la primera variable es " << var_1 << ".\n";

    cout << "\nAhora, introduce el valor de otra variable.\n";
    cin >> var_2;
    cout << "El valor de la segunda variable es " << var_2 << ".\n";

    var_1 = var_1 + var_2;

    var_2 = var_1 - var_2;
    var_1 = var_1 - var_2;

    cout << "\nAhora el valor de la primera variable es " << var_1 << ".\n";
    cout << "Ahora el valor de la segunda variable es " << var_2 << ".\n";

    return 0;
}
