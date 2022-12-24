#include <iostream>

using namespace std;
/// 99 Problems - Kattis

int main()
{
    int n;
    cin >> n;

    if(n <= 99){
        cout << 99;
    }

    else if(n > 99){
        int num = 0;
        int m = n;

        num += n%10;
        n /= 10;
        num += (n%10)*10;

        if( (99-num) <= 50){
            cout << (m + (99-num));
        }

        else{
            cout << (m + (99-num)) - 100;
        }
    }

    return 0;
}
