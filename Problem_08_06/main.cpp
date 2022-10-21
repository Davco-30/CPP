#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números y encontrar la mayor suma posible de 2 números no adyacentes en el arreglo
    ///[1,7,8,5,9,3]

    int num_1;
    cout << "Ingresa un número" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    int max_quantity = 0;


    for(int i = 0; i < num_1; i++){
        int sum = 0;
        for(int j = i+2; j < num_1; j++){
            sum = num_array[i] + num_array[j];

            if(sum > max_quantity){
                max_quantity = sum;
            }
        }
    }

    cout << "\n" << max_quantity;

    return 0;
}
