#include <iostream>

using namespace std;
///judgingmoose - Kattis

int main()
{
    int l, r;
    cin >> l >> r;

    if(l+r == 0){
        cout << "Not a moose";
    }

    else{
        if(l == r){
            cout << "Even " << (l+r);
        }

        else if(l > r){
            cout << "Odd " << (l*2);
        }

        else if(l < r){
            cout << "Odd " << (r*2);
        }
    }

    return 0;
}
