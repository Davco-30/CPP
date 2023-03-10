#include <iostream>

using namespace std;
///Se me van a dar n números que son 1's y 0's y hay que encontrar la cantidad de ternas alternantes
///que hay en el arreglo

int main()
{
    ///1 0 1: Terna
    ///0 1 0: Terna

    ///1 0 1 1 0 1 0 => 12

    ///2
    ///Intenta hacer una solución cuadrática del problema
    int n;
    cin >> n;

    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int result = 0;

    for(int i = 1; i < n-1; i++){
        int center = arr1[i];
        int right = 0, left = 0;

        for(int j = i+1; j < n; j++){
            if(arr1[j] != center){
                right++;
            }
        }

        for(int j = i-1; j >= 0; j--){
            if(arr1[j] != center){
                left++;
            }
        }

        result += left*right;
    }

    cout << "Resultado: " << result;

    return 0;
}
