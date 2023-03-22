#include <bits/stdc++.h>

using namespace std;
///OmegaUp - 6737. La fiesta de Charls

int main()
{
    int n;
    cin >> n;



    ///30% Solutiion
    /*
    long long int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long int distance = LLONG_MAX;

    for(long long int i = 0; i < n; i++){
        long long int total = 0, num = arr[i];

        for(int j = 0; j < n; j++){
            if(arr[j] > num){
                total += arr[j] - num;
            }

            else{
                total += num - arr[j];
            }
        }

        if(total < distance){
            distance = total;
        }
    }

    cout << distance;*/
    return 0;
}
