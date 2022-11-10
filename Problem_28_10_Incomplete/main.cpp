#include <iostream>

using namespace std;
///Marconacci - OmegaUp

int main()
{
    long long int p;
    cin >> p;

    for(int i = 0; i < p; i++){
        long long int a, b, k;
        long long int c = 0;
        cin >> a >> b >> k;

        if(k == 1){
            cout << a << "\n";
        }

        else if(k == 2){
            cout << b << "\n";
        }

        else{
            c = a + b;
            a = c;

            for(int j = 0; j < k-3; j++){
                long long int c1 = c;
                c = a + b;
                b = c1;
                a = c;

                a %= (long long int)(1000000000+7);
                b %= (long long int)(1000000000+7);
                c %= (long long int)(1000000000+7);
                //cout << "\nc: " << c << "\n";
            }

            cout << c << "\n";
        }
    }

    return 0;
}
