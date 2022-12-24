#include <iostream>

using namespace std;
///A - Spy Detected! - Codeforces

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


        for(int j = 1; j < n-1; j++){
            if(arr1[j] != arr1[j-1] && arr1[j] == arr1[j+1]){
                cout << j << endl;
                break;
            }

            else if(arr1[j] == arr1[j-1] && arr1[j] != arr1[j+1]){
                cout << j+2 << endl;
                break;
            }

            else if(arr1[j] != arr1[j-1] && arr1[j] != arr1[j+1]){
                cout << j+1 << endl;
                break;
            }
        }
    }
    return 0;
}
