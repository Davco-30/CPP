#include <iostream>
typedef long long int lli;
///Binary Exponentiation
using namespace std;

lli bin_exp(lli n, lli x);

int main()
{
    lli x, n;
    cin >> n >> x;

    cout << bin_exp(n,x);

    return 0;
}

lli bin_exp(lli n, lli x){  ///4, 5 = (4)*(4^4)
    cout << "- " << x << endl;

    if(x == 0){
        return 1;
    }

    if(x % 2 == 1){
        return n*(bin_exp(n,x-1));
    }

    else if(x % 2 == 0){
        lli result = bin_exp(n,x/2);
        result *= result;
        return result;
    }

}
