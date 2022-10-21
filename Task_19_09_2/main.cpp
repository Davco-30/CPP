#include <iostream>

using namespace std;
///Planina - Kattis

int main()
{
    int n;
    int total = 2;
    cin >> n;

    for(int i = 1; i < n; i++){
        total *= 2;
        //cout << "total: " << total << "\n";
    }

    total += 1;
    total *= total;

    ///Total = (2^n + 1)^2
    cout << total;

    return 0;
}
