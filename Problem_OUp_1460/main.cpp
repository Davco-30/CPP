#include <iostream>

using namespace std;
///Omega Up - 1460. Las Cuentas del Hippie

int main()
{
    int k, n;
    cin >> k >> n;

    int collar[2*n];

    for(int i = 0; i < n; i++){
        cin >> collar[i];
        collar[n+i] = collar[i];
    }

    ///n=6, [0 0 1 1 1 0 0 1 | 0 0 1 1 1 0 0 1]
    ///k=4

    int right = 0, left = 0;
    int sum = n;
    int sum2 = 0, sum_1 = 0;

    while( right < (2*n) ){/*
        cout << "sum_0: " << sum2 << endl;
        cout << "sum_1: " << sum_1 << endl;
        cout << "Mínimo: " << sum << endl;*/

        if(sum2 < k){
            if( collar[right] == 0){
                sum2++;
            }

            else if( collar[right] == 1){
                sum_1++;
            }

            right++;
        }

        else{
            if( (sum_1) < sum){
                sum = sum_1;
            }

            if(collar[left] == 0){
                sum2--;
            }

            else if(collar[left] == 1){
                sum_1--;
            }

            left++;
        }
    }

    cout << sum;

    return 0;
}
