#include <iostream>

using namespace std;

int main()
{
    float num1;
    float num2;

    cout << "Por favor, ingrese 2 números: \n";
    cin >> num1;
    cin >> num2;

    if(num1 == num2){
        cout << "Los 2 números que ingresó son iguales.";
    }

    if(num1 < num2){
        cout << "El primer número es menor al segundo número.";
    }

    if(num1 > num2){
        cout << "El primer número es mayor al segundo número.";
    }

    return 0;
}
