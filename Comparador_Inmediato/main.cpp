#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números e imprimir lo siguiente: desplegar por pantalla una sola línea el mismo orden de los números, pero en medio
    ///de cada uno de esos números hay que imprimir un signo de mayor o menor que.

    int num_frst;

    cout << "Por favor introduce un número, por favor." << endl;
    cin >> num_frst;

    int num_gp[num_frst];

    cout << "Ahora, introduce una cantidad de números indivduales dependiendo del número introducido recientemente.\n";

    for(int i=0; i<num_frst; i++){
        cin >> num_gp[i];
    }

    for(int i=0; i<num_frst - 1; i++){
        if(num_gp[i] < num_gp[i+1]){
            cout << num_gp[i] << " < ";
        }

        if(num_gp[i] > num_gp[i+1]){
            cout << num_gp[i] << " > ";
        }
    }

    cout << num_gp[num_frst - 1];


    return 0;
}
