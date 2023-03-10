#include <iostream>

using namespace std;
///Codeforces - A. Codeforces Checking

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        char n;
        cin >> n;

        if( (n >= 99 && n <= 102) || (n >= 114 && n <= 115) || (n == 111) ){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }
    }

    return 0;
}
