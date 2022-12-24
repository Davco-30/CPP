#include <iostream>

using namespace std;
///Online Judge - 11805

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n,k,p;
        cin >> n >> k >> p;

        if(p > n){
            int quotient = (p / n);
            p -= (quotient*n);
        }

        k += p;

        if(k > n){
            k -= n;
        }

        cout << "Case " << (i+1) << ": " << k << endl;

    }
    return 0;
}
