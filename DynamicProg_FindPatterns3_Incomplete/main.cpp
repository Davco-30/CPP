#include <iostream>

using namespace std;
///Se me van a dar n números que son 1's y 0's y hay que encontrar la cantidad de ternas alternantes
///que hay en el arreglo

int main()
{
    ///1 0 1: Terna
    ///0 1 0: Terna

    ///1 0 1 1 0 1 0 => 12

    ///Ahora encuentra una solución lineal.

    ///[3,3,2,2,2,1,1] :0's der ||  [4,3,3,2,1,1,0] :1's der
    ///[3,2,2,1,1,1,0] :0's izq ||  [4,4,3,3,2,2,1] :1's izq

    int n;
    cin >> n;

    int arr1[n], ones = 0, zeros = 0;
    int right_Zero[n], right_One[n], left_Zero[n], left_One[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];

        if(arr1[i] == 1){
            ones++;
        }

        else{
            zeros++;
        }

        left_One[n-i-1] = ones;
        left_Zero[n-i-1] = zeros;
    }

    for(int i = 0; i < n; i++){
        right_One[i] = ones;
        right_Zero[i] = zeros;

        if(arr1[i] == 1){
            ones--;
        }

        else{
            zeros--;
        }
    }

    cout << "Resultado: " << result;

    return 0;
}
