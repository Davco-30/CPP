#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer el número n y determina si el número es primo o no.

    int num_frst;
    int div = 0;

    cout << "Por favor, introduce un número." << endl;
    cin >> num_frst;

    for(int i=1; i<=num_frst; i++){
        if(num_frst % i == 0){
            div = div + 1;
        }
    }

    if(div != 2){
        cout << num_frst << " no es un número primo.\n";
    }

    if(div == 2){
        cout << num_frst << " es un número primo.\n";
    }

    return 0;
}
