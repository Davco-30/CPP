#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números que solamente son 1 y 0 y ordenarlos de menor a mayor.

    int n_1;
    cout << "Ingresa un número" << endl;

    cin >> n_1;

    int n_gp[n_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < n_1; i++){
        cin >> n_gp[i];
    }

    for(int i = 0; i < n_1; i++){

        for(int j = i + 1; j < n_1; j++){

            if(n_gp[i] > n_gp[j]){
                int c = n_gp[j];
                n_gp[j] = n_gp[i];
                n_gp[i] = c;
            }

        }

    }

    for(int i = 0; i < n_1; i++){
        cout << n_gp[i] << " ";
    }


    ///2
    ///Pista

    /* A = 5;
    int B = 10;

    int C = A;

    A = B;
    B = C;

    cout << A << " " <<B;
    */

    return 0;
}
