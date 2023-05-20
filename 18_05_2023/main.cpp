#include <iostream>

using namespace std;
///Codeforces - A. George and Accommodation

int main()
{
    int n, result = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int p, q;
        cin >> p >> q;

        if( (q-p) >= 2){
            result++;
        }
    }

    cout << result;

    return 0;
}
