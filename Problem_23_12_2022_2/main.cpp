#include <iostream>

using namespace std;
///Leer n números y un número k e indicar el tamaño del subarreglo más grande que tenga como promedio a lo más k.

int main()
{
    ///[4 8 9 10 7 11]
    ///k = 3

    int n, k;
    cin >> n;

    int arr1[n];
    int total = 0;

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        total += arr1[i];
    }

    cin >> k;

    ///[10 5 8 9 2 1]
    ///k = 7

    int right = 0, left = n-1;
    int result_size = 0, size_arr = n;

    while(size_arr > 0){
        cout << "Total: " << total << endl;
        cout << "Promedio: " << total/size_arr << endl;
        cout << "Resultado: " << result_size << "\n" << endl;

        if( (total/size_arr) <= k && size_arr > result_size){
            result_size = size_arr;
        }

        else{
            if(arr1[right] >= arr1[left]){
                total -= arr1[right];
                right++;
            }

            else{
                total -= arr1[left];
                left--;
            }

            size_arr--;
        }
    }

    cout << "Total: " << total << endl;
    cout << "Promedio: " << total/result_size << endl;
    cout << result_size;

    return 0;
}
