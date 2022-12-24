#include <iostream>

using namespace std;

int main()
{
    cout << "Ingrese un número1: " << endl;
    int num1;

    cin >> num1;

    if((num1 % 2) == 0){
        cout << "El número que ingresaste es par";
    }

    if((num1 % 2) == 1){
        cout << "El número que ingresaste es impar";
    }

    return 0;
}
