#include <iostream>

using namespace std;
/// Leer un arreglo de tamaño n e indicar cuál es la mayor suma que puedes obtener con elementos continuos

int main()
{
    while(true){
        cout << "P." << endl;
        int n;
//        cin >> n;

        n= 10;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int temp_sum = 0, final_sum = 0;

        for(int i = 0; i < n; i++){
            int temp = temp_sum;

            if( (temp + arr[i]) < 0 ){
                temp_sum = 0;
            }

            else{
                temp_sum += arr[i];

                if(temp_sum > final_sum){
                    final_sum = temp_sum;
                }
            }

            cout << "Temp: " << temp << "\t Temp_sum: " << temp_sum << "\tFinal_sum: " << final_sum << endl;
        }

        cout << final_sum;

        cout << "\n" << endl;
    }

    return 0;
}
