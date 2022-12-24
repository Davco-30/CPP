#include <iostream>
#include <algorithm>

using namespace std;
///A. Remove Smallest - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int arr1[n];

        for(int j = 0; j < n; j++){
            cin >> arr1[j];
        }

        sort(arr1,arr1+n);
        ///sort(arr1+0,arr1+n-1+1);  sort(donde empiezas, donde terminas + 1)

        if(n == 1){
            cout << "YES\n";
            continue;
        }

        int mark = 0;

        for(int j = 1; j <= n-1; j++){
            int num = arr1[j];
            int num2 = arr1[j-1];

            if( (num-num2) >= 2){
                mark = 1;
                break;
            }
        }

        if(mark == 0){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }

    }
    return 0;
}
