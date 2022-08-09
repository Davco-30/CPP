#include <iostream>

using namespace std;

int main()
{
    int t; ///Number of cases
    cin >> t;

    for(int i = 0; i < t; i++){  ///Complejidad => O(t)
        int x, y, n;
        cin >> x;  ///176
        cin >> y;  ///0
        cin >> n;  ///1000000

        int k = n/x;
        k = k*x;
        k = k + y;

        cout << k;
    }

    return 0;
}
