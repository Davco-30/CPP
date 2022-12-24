#include <iostream>

using namespace std;
///Leer n números y un número k. Debes indicar el tamaño del subarreglo más pequeño que contenga al menos k ceros.

int main()
{
    ///7,9,8,0,0,1,0,7,4,3,0,10,14,3,0
    ///k = 3, answer = 4: [0,0,1,0]

    int n, k;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cin >> k;

    int sum = 0, res = n;
    int right = -1, left = 0;

    while(right < n){
        if(sum < k){
            right++;
            if(arr1[right] == 0){
                sum++;
            }
        }

        else{
            if( (right - left + 1) < res){
                res = (right - left + 1);
            }

            if( arr1[left] == 0 ){
                sum--;
            }

            left++;
        }
    }

    cout << res << endl;

    return 0;
}
