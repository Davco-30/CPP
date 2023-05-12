#include <iostream>

using namespace std;
///Codeforces - A. Lucky Division
int main()
{
    int n;
    cin >> n;

    if( (n % 4 == 0) || (n % 7 == 0) ){
        cout << "YES";
    }

    else{
        while(n > 0){
            //cout << "Remainder: " << n%10 << endl;
            if( (n%10 != 4) && (n%10 != 7) ){
                cout << "NO";
                return 0;
            }
            n /= 10;
        }

        cout << "YES";
    }
    return 0;
}
