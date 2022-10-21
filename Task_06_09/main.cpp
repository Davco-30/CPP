#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int even_hy, even, odd_hy, odd;
        int n;
        cin >> n;

        int array_a[n];

        for(int j = 0; j < n; j++){
            cin >> array_a[j];

            if(j%2 != array_a[j] % 2){
                if(array_a[j] % 2 == 0){
                    even++;
                }

                else{
                    odd++;
                }
            }
        }

        /*if(n % 2 == 1){
            n--;
            odd_hy = n / 2;
            even_hy = odd_hy + 1;
        }

        else{
            odd_hy = n / 2;
            even_hy = odd_hy;
        }*/

        if(even != odd){
            cout << "-1";
        }

        else{
            cout << even;
        }


    }

    return 0;
}
