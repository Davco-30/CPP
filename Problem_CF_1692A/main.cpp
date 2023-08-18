#include <iostream>

using namespace std;
///Codeforces - A. Marathon

int main()
{
    int n;                              ///Memory: 4 Bytes
    cin >> n;

    for(int i = 0; i < n; i++){         ///O(n), Worst case: O(100)
        int a,b,c,d, runners = 0;       ///Memory: (4 Bytes) *5
        cin >> a >> b >> c >> d;

        if(b > a){                      ///O(1)
            runners++;
        }

        if(c > a){                       ///O(1)
            runners++;
        }

        if(d > a){                       ///O(1)
            runners++;
        }

        cout << runners << endl;
    }

    return 0;
}
