#include <iostream>

using namespace std;
///Leer n números que serán 1s o 0s y debes e indicar si puedes cambiar k ceros por unos.
///¿Cuál es el conjunto de 1s continuos más largos que puedes crear

int main()
{
    ///[0 1 0 0 1 1 1 0 1 0 1]
    /// k = 3

    int n, k;
    cin >> n;

    int arr1[n];

    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }

    cin >> k;

    int sum = 0, sum2 = 0, zeros = k;
    int right = 0, left = 0;

    while(right < n){
        if(zeros == 0){
            if(sum2 > sum){
                sum = sum2;
            }

            if(arr1[left] == 0){
                zeros++;
            }

            left++;
            sum2--;
        }

        else{
            if(arr1[right] == 0){
                zeros--;
                sum2++;
            }

            else if(arr1[right] == 1){
                sum2++;
            }

            right++;
        }
    }

    cout << "Conjunto de 1's: " << sum << endl;

    return 0;
}
