#include <iostream>

using namespace std;
/// Moscow Dream - Kattis

int main()
{
    int a,b,c;
    int n;

    cin >> a >> b >> c;
    int total = a + b + c;

    cin >> n;

    if((a >= 1) && (b >= 1) && (c >= 1) && (total >= n) && (n >= 3)){
        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}
