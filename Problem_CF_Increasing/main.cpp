#include <iostream>

using namespace std;
///Increasing - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int arr[n];
        int cases = 0;

        for(int j = 0; j < n; j++){
            int num;
            cin >> num;
            arr[j] = num;
        }

        for(int j = 0; j < n-1; j++){
            for(int k = j; k < n-1; k++){
                if(arr[j] == arr[k+1]){
                    cases++;
                }
            }
        }

        if(cases > 0){
            cout << "NO\n";
        }

        else{
            cout << "YES\n";
        }

    }

    return 0;
}
