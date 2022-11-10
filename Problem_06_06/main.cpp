#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números e indicar cuales números aparecen al menos 2 veces.

    int n_1;
    cout << "Ingresa un número" << endl;

    cin >> n_1;

    int n_gp[n_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < n_1; i++){
        cin >> n_gp[i];
    }

    for(int i = 0; i < n_1; i++){
        int t_1 = 1;

        for(int j = i + 1; j < n_1; j++){

            if(n_gp[i] == n_gp[j]){
                t_1 = t_1 + 1;
            }

        }

        if(t_1 >= 2){
            cout << n_gp[i] << " ";
        }
    }

    return 0;
}
