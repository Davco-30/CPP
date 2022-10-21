#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números e indicar cuál es el segundo menor número (todos los números son distintos).

    int n_1;

    cout << "Ingresa un número. \n" << endl;
    cin >> n_1;

    int n_grp[n_1];
    cout << "Ahora, introduce una cantidad de números de acuerdo al primero que ingresaste. \n";

    for(int i = 0; i < n_1; i++){
        cin >> n_grp[i];
    }

    int min_A = INT_MAX;

    for(int i = 0; i < n_1; i++){
        if(n_grp[i] < min_A){
            min_A = n_grp[i];
        }
    }

    int min_B = INT_MAX;
    int min_2 = 0;

    for(int i = 0; i < n_1; i++){
        if(n_grp[i] < min_B && n_grp[i] > min_A){
            min_2 = n_grp[i];
        }
    }

    cout << "El segundo menor número de la lista es: " << min_2;

    return 0;
}
