#include <iostream>

using namespace std;
typedef long long int lli;

///OmegaUp: 3692. Chicos Mosby

int main()
{
    lli n, m;
    cin >> n >> m;

    int minutes= 0;

    while(n > 0 && m > 0){
        if(m == n){
            minutes++;
            break;
        }

        else if(n == 1 || m == 1){
            minutes += n*m;
            break;
        }

        else{
            int factor;
            if(n < m){
                factor = m/n;
                m -= (n*factor);
                minutes += factor;
            }

            else if(n > m){
                factor = n/m;
                n -= m*factor;
                minutes += factor;
            }
        }
    }

    cout << minutes;

    return 0;
}
