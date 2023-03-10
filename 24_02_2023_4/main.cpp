#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int planets[n];
    int highest = 0;

    for(int i = 0; i < n; i++){
        cin >> planets[i];
        if(planets[i] > highest){
            highest = planets[i];
        }
    }

    int sum = 0;
    //cout << "highest: "<< highest;
    for(int i = 0; i< n; i++){
        sum += (highest - planets[i]);
        //cout << "sum: " << sum << endl;
    }

    cout << sum;

    return 0;
}
