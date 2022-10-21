#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números y colocar del lado izquierdo del arreglo todos los elementos pares y del lado derecho los impares.
    ///[8,10,5,7,7,9]

    int num_1;
    cout << "Ingresa un número" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    for(int i = 0; i < num_1; i++){
        int num_backup = 0;

        for(int j = i + 1; j < num_1; j++){

            if(num_array[j] % 2 == 0 && num_array[i] % 2 == 1){
                num_backup = num_array[i];
                num_array[i] = num_array[j];
                num_array[j] = num_backup;
            }

        }

    }

    cout << "\n";

    for(int i = 0; i < num_1; i++){
        cout <<  num_array[i] << " ";
    }

    return 0;
}
