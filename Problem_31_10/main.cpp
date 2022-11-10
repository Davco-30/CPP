#include <iostream>

using namespace std;
///Sum - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        if( (a+b) == c){
            cout << "YES\n";
        }

        else if( (a+c) == b){
            cout << "YES\n";
        }

        else if( (b+c) == a){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }
    }
    return 0;
}
