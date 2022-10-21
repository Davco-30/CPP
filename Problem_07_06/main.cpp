#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números (esos pueden ser negativos) y tienes que imprimir el par de números cuya suma se acerca más a 0.

    int num_1;
    cout << "Ingresa un número" << endl;

    cin >> num_1;

    int num_array[num_1];
    cout << "Ahora ingresa más números de acuerdo al primero que has dado.\n";

    for(int i = 0; i < num_1; i++){
        cin >> num_array[i];
    }

    int max_quantity = INT_MAX;
    int min_quantity = INT_MIN;

    int sum_array_1[2];
    int sum_array_2[2];

    for(int i = 0; i < num_1; i++){
        int sum = 0;

        for(int j = i+1; j < num_1; j++){

            sum = num_array[i] + num_array[j];

            if(sum  >= 0){
                if(sum < max_quantity){
                    max_quantity = sum;
                    sum_array_1[0] = num_array[i];
                    sum_array_1[1] = num_array[j];
                }
            }

            if(sum  <= 0){
                if(sum > min_quantity){
                    min_quantity = sum;
                    sum_array_2[0] = num_array[i];
                    sum_array_2[1] = num_array[j];
                }
            }

        }

    }

    if( (min_quantity * (-1)) < (max_quantity) ){
        //cout << min_quantity;
        cout << sum_array_2[0] << ", " << sum_array_2[1];
    }

    else{
        //cout << max_quantity;
        cout << sum_array_1[0] << ", " << sum_array_1[1];
    }

    return 0;
}
