#include <iostream>

using namespace std;

int main()
{
    ///1st
    cout << "Ingresa un número\n";
    int num;

    cin >> num;

    if(num == 0){
        cout << "Tu número " << num << " es igual a 0";
    }

    if(num < 0){
        cout << "Tu número es menor a 0. O sea, es negativo";
    }

    if(num > 0){
        cout << "Tu número es mayor a 0. O sea, epositivo";
    }

    return 0;
}
