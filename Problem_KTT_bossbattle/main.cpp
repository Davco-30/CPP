#include <iostream>

using namespace std;
///bossbattle - Kattis

int main()
{
    int n;
    cin >> n;

    if(n < 4){
        cout << 1;
    }

    else{
        cout << (n-2);
    }

    return 0;
}
