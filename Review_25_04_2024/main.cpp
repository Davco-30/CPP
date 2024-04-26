#include <iostream>

using namespace std;
///Dado un arreglo n compuesto por 1's y 0's, coloca los 1's al principio del arreglo.

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int first = 0, last = n-1;

    while(first < last){
        if(arr[first] == 0){
            if(arr[last] == 1){
                int num = arr[last];
                arr[last] = arr[first];
                arr[first] = num;
            }

            else{
                last--;
            }
        }

        else{
            first++;
        }
    }

    cout << "Arreglo: "<< endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
