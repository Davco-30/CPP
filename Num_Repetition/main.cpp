#include <iostream>

using namespace std;

int main()
{
    ///2
    ///Se leerán n números y debes de imprimir por pantalla todos los números que no se repitan

    int n_frst;

    cout << "Por favor, ingresa un número." << endl;
    cin >> n_frst;

    int n_grp[n_frst];

    cout << "Ahora, ingresa una cantidad de números de acuerdo con el número ingresado." << endl;
    for(int i = 0; i < n_frst; i++){
        cin >> n_grp[i];
    }

    for(int i = 0; i < n_frst; i++){
        int total = 0;

        for(int j = 0; j < n_frst; j++){
            if(n_grp[i] == n_grp[j]){
                total = total + 1;
            }
        }

        if(total == 1){
            cout << n_grp[i] << "\n";
        }
    }

    return 0;
}

    ///3

    /*int n_frst;

    cout << "Por favor, ingresa un número." << endl;
    cin >> n_frst;

    int n_grp[n_frst];

    cout << "Ahora, ingresa una cantidad de números de acuerdo con el número ingresado." << endl;
    for(int i = 0; i < n_frst; i++){
        cin >> n_grp[i];
    }

    for(int i = 0; i < n_frst; i++){

        int num_t = 0;

        for(int j = 0; j < n_frst; j++){

            if(n_grp[i] == n_grp[j]){
                num_t = num_t + 1;
            }

        }

        cout << n_grp[i] << ": " << num_t << "\n";
    }
    */
