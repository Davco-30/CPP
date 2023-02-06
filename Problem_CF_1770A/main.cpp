#include <iostream>
#include <algorithm>

using namespace std;
///Codeforces - A. Koxia and Whiteboards

int main()
{
    int t;
    cin >> t;

    for(int i =  0; i < t; i++){
        int n, m;
        cin >> n >> m;

        int arr1[n];
        int arr2[m];
        long long int sum = 0;

        for(int j = 0; j < n; j++){
            cin >> arr1[j];
        }

        for(int j = 0; j < m; j++){
            cin >> arr2[j];
        }

        sort(arr1, arr1+n);
        sort(arr2, arr2+m);

        for(int j = 0; j < n; j++){
            if(n > m && j > (m-1)){
                sum += arr1[j];
            }
        }

        for(int j = 0; j < m; j++){
            if(n >= m){
                sum += arr2[j];
            }

            else if(n < m){
                if(j > (m-n-1)){
                    sum += arr2[j];
                }
            }
        }

        cout << sum << endl;
    }
    return 0;
}
