#include <iostream>

using namespace std;
///Codeforces - A. Holiday Of Equality

int main()
{
    int n;                          ///Memory: 4 Bytes
    cin >> n;

    int burles[n], maximum = 0;     ///Memory: 4 Bytes, 4 Bytes

    for(int i = 0; i < n; i++){     ///O(n), Worst case: O(100)
        cin >> burles[i];

        if(burles[i] > maximum){    ///O(1)
            maximum = burles[i];
        }
    }

    int counter = 0;                        ///Memory: 4 Bytes

    for(int i = 0; i < n; i++){             ///O(n), Worst case: O(100)
        counter += maximum - burles[i];
    }

    cout << counter;

    return 0;
}
