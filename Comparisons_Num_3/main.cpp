#include <iostream>
///Instrucciones: Leer 2 números e imprimirlos separados por espacios de menor a mayor.

using namespace std;

int main()
{
    ///1
    /*
    cout << "Ingrese 2 números" << endl;
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    if(num1 < num2){
        cout << num1 << " " << num2;
    }

    if(num1 >= num2){
        cout << num2 << " " << num1;
    }
    */

    ///2

    /*
    cout << "Ingrese 3 números" << endl;
    int num1;
    int num2;
    int num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 < num2){
        if(num1 < num3){
            if (num3 < num2){
                cout << num1 << " " << num3 << " " << num2;
            }
            if (num3 > num2){
                cout << num1 << " " << num2 << " " << num3;
            }
        }

        if(num1 > num3){
            if(num3 < num2){
                cout << num3 << " " << num1 << " " << num2;
            }
            ///if(num3 < num2){
             ///   cout << num3 << " " << num1 << " " << num2;
            ///}
        }
    }

    if(num1 > num2){
        if(num1 > num3){
            if(num3 < num2){
                cout << num3 << " " << num2 << " " << num1;
            }
            if(num3 > num2){
                cout << num2 << " " << num3 << " " << num1;
            }
        }

        if(num1 < num3){
            if(num3 > num2){
                cout << num2 << " " << num1 << " " << num3;
            }
        }
    }
    */

    ///3
    /*
    cout << "Ingrese 3 números" << endl;
    int num1;
    int num2;
    int num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 > num2 && num1 > num3 && num2 < num3){
        cout << num2 << " " << num3 << " " << num1;
    }

    if(num1 > num2 && num1 < num3 && num2 < num3){
        cout << num2 << " " << num1 << " " << num3;
    }

    if(num1 < num2 && num1 > num3 && num2 > num3){
        cout << num3 << " " << num1 << " " << num2;
    }

    if(num1 > num2 && num1 > num3 && num2 > num3){
        cout << num3 << " " << num2 << " " << num1;
    }

    if(num1 < num2 && num1 < num3 && num2 < num3){
        cout << num1 << " " << num2 << " " << num3;
    }

    if(num1 < num2 && num1 < num3 && num2 > num3){
        cout << num1 << " " << num3 << " " << num2;
    }
    */
}


