#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números e indicar qué número aparece la mayor cantidad de veces (se te garantiza que no habrá empates en primer lugar)

    int num_1;
    cout << "Ingresa un número" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    int cal_final = 0;
    int num_final = 0;

    for(int i = 0; i < num_1; i++){
        int num_total = 1;

        for(int j = i+1; j < num_1; j++){

            if(num_array[i] == num_array[j]){
                num_total = num_total + 1;
            }

        }

        if(num_total > cal_final){
            cal_final = num_total;
            num_final = num_array[i];
        }
    }

    cout << "\n El número de veces más grande que aparece un número es: " << cal_final << "\n El número que aparece una mayor cantidad de veces es: " << num_final;

    return 0;
}
