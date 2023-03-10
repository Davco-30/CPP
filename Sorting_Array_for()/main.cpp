#include <iostream>

using namespace std;
///Se te dará n números que sólo pueden ser 1's y 0's y debes de hacer que de lado izquierdo del arreglo
///sólo haya 0's y del lado derecho sólo haya 1's, respetando la cantidad de 0's y de 1's que había en el arreglo original.

int main()
{
    ///n=5, 0 0 1 0 1, [0 0 0 1 1]
    ///11: 1 0 1 1 1 0 0 0 0 1 1

    int n;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    int left = 0, right = n-1;

    ///9: {0 0 1 1 1 0 0 0 1}
    for(int i = n-1; i >= 0; i--){         ///Complejidad: O(n)
        /*
        cout << "left: " << left << endl;
        cout << "right: " << right << endl;*/

        if(arr1[left] == 1 && arr1[right] == 0){
            int answer = arr1[left];
            arr1[left] = arr1[right];
            arr1[right] = answer;
            left++;
            right--;
        }

        else if(arr1[left] == 0 && arr1[right] == 1){
            left++;
        }

        else if(arr1[left] == 1 && arr1[right] == 1){
            right--;
        }

        else if(arr1[left] == 0 && arr1[right] == 0){
            left++;
        }

        if(right < left){
            break;
        }
    }

    cout << "Answer:\n";
    for(int i = 0; i < n; i++){
        cout << arr1[i] << " ";
    }

    return 0;
}
