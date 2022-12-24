#include <iostream>
typedef long long int ll;   ///ll ahora será considerado como long long int
using namespace std;
///Sumas de Jardín - OmegaUp

int main()
{
    ll n;
    cin >> n;

    ll list1[n];
    ll sum = 0;

    for(int i = 0; i < n; i++){
        cin >> list1[i];
    }

    ll m = n;
    ll m2 = 1;
    ll num = m-1;

    while(m > 0){
        sum += (list1[num])*(m*m2)%(ll)(1000000000+7); ///10e9+7
        sum %= (ll)(1000000000+7);
        m--;
        m2++;
        num--;
    }

    cout << sum;

    return 0;
}
