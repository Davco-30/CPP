#include <iostream>

using namespace std;
///Se te dará n números que sólo pueden ser 1's y 0's y debes de hacer que de lado izquierdo del arreglo
///sólo haya 0's y del lado derecho sólo haya 1's, respetando la cantidad de 0's y de 1's que había en el arreglo original.

int main()
{
    ///n=6, 0 0 0 1 1 1, [0 0 0 1 1 1]
    ///n=5, 0 0 1 0 1, [0 0 0 1 1]

    int n;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int num = -1;

    for(int i = 0; i < n; i++){         ///Complejidad: O(n)
        if(num == -1 && arr1[i] == 1){
            num = i;
        }

        if(num != -1 && arr1[i] == 0){
            int answer = arr1[num];
            arr1[num] = arr1[i];
            arr1[i] = answer;

            num = i;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }

    return 0;
}
