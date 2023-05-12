#include <iostream>
typedef long long int lli;

using namespace std;
///Codeforces - A. Wrong Subtraction

int main()
{
    lli n, k;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        if(n%10 == 0){
            n /= 10;
        }

        else{
            n--;
        }
    }

    cout << n;

    return 0;
}
