#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    int arr_1[n];

    for(int i = 0; i < n; i++){
        cin >> arr_1[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr_1[i] << " ";
    }

    cout << "\n";

    for(int i = n - 1; i >= 0; i--){
        cout << arr_1[i] << " ";
    }

    cout << "\n";

    int m = 0;
    int arr_2[m];

    for(int i = 0; i < n; i++){
        int num = 1;
        for(int j = i + 1; j < n; j++){
            if(arr_1[j] == arr_1[i]){
                num++;
            }
        }

        if(num == 1){
            arr_2[m];
            m++;
        }
    }

    ///[454,21,36,9,21,36,45]

    for(int i = 0; i < m; i++){
        cout << arr_2[i] << " ";
    }

    /*for(int i = 0; i < n+1; i++){
        if(i = 0){
            int num = arr[n-1];
            arr_1[0] = num;
        }

        else{
            int num_2 = arr[i+1]
            arr_1[i+1] = arr_1[i];
        }

    }*/

    return 0;
}
