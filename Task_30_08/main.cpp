#include <iostream>

using namespace std;
///1. Leer un entero y crear otro entero que sea el primer entero invertido
///Sin arreglos

///2. Leer un número entero en formato binario e imprimir su número decimal.

int main()
{
    /* 1.
    int n;
    cin >> n;

    int digits = 0;
    int n_2 = n;

    while(n_2 > 0){
        n_2 = n_2 / 10;
        digits++;
    }

    for(int i = 0; i < digits; i++){
        int number = (n%10);
        n = n / 10;

        cout << number;
    }*/

    //2.

    ///0001001 = 9
    ///011001 = 2^0 + 2^3 + 2^4 = 25
    ///1001011 = 75

    int n;
    cin >> n;

    int decimal = 0;

    int n_2 = n;
    int length = 0;

    while(n_2 > 0){
        n_2 = n_2 / 10;
        length++;
    }

    for(int i = 0; i < length - 1; i++){
        int number = (n%1);
        n = n /10;

        if(number == 1){
            int m = 2;

            if(i == 0){
                decimal++;
            }

            if(i != 0){
                for(int j = 1; j = i; i++){

                    m = m * m;
                }

                decimal = decimal + m;
            }

        }
    }

    cout << decimal;

    return 0;
}
