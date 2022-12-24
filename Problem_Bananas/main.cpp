#include <iostream>

using namespace std;
///Soldier and Bananas - Codeforces

int main()
{
    int k, n, w;
    int debt = 0;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++){
        debt += i*k;
    }

    if(debt > n){
        debt -= n;
        cout << debt;
    }

    else{
        cout << 0;
    }

    return 0;
}
