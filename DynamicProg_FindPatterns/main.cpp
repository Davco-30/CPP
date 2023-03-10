#include <iostream>

using namespace std;
///Se me van a dar n números que son 1's y 0's y hay que encontrar la cantidad de ternas alternantes
///que hay en el arreglo

int main()
{
    ///1 0 1: Terna
    ///0 1 0: Terna

    ///1 0 1 1 0 1 0 => 12

    ///1
    int n;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int result = 0;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(arr1[i] != arr1[j] && arr1[j]!= arr1[k]){
                    result++;
                }

                //if(arr1[i] == 1 && arr1[j] == 0 && arr1[k] == 1){
                    //result++;
                //}

                //else if(arr1[i] == 0 && arr1[j] == 1 && arr1[k] == 0){
                    //result++;
                //}
            }
        }
    }

    cout << "Resultado: " << result;

    return 0;
}
