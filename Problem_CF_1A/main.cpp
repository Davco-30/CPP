#include <iostream>

using namespace std;
///Codeforces - A. Theatre Square

int main()
{
    long long int n, m, a;
    long long int result = 0;

    cin >> n >> m >> a;

    if(a >= n){
        n = 1;
    }

    else{
        long long int n2 = n;

        n = (n/a);

        if( (n2%a) != 0){
            n++;
        }
    }

    //cout << "n: " << n << endl;

    if(a >= m){
        m = 1;
    }

    else{
        long long int m2 = m;

        m = (m/a);

        if( (m2%a) != 0){
            m++;
        }
    }

    //cout << "m: " << m << endl;

    result = m*n;

    cout << result;

    return 0;
}
