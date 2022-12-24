#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Introduce un número.\n";
    cin >> n;

    int arr_A[n];

    cout << "\nAhora, introduce un arreglo que contenga " << n << " números.\n";

    for(int i = 0; i < n; i++){
        cin >> arr_A[i];
    }

    int num_original = arr_A[n-1];

    for(int i = n - 1; i >= 0; i--){
        int change = i - 1;
        arr_A[i] = arr_A[change];

        if(i == 0){
            arr_A[i] = num_original;
        }
    }

    cout << "\n";

    for(int i = 0; i < n; i++){
        cout << arr_A[i] << " ";
    }

    return 0;
}
