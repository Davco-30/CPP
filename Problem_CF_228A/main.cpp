#include <iostream>
#include <bits/stdc++.h>
typedef long long int lli;

using namespace std;
///Codeforces - A. Is your horseshoe on the other hoof?

int main()
{
    lli shoes[4];

    int result = 0;

    for(int i = 0; i < 4; i++){
        cin >> shoes[i];
    }

    sort(shoes, shoes+4);

    for(int i = 0; i < 3; i++){
        if(shoes[i] == shoes[i+1]){
            result++;
        }
    }

    cout << result;

    return 0;
}
