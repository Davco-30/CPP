#include <iostream>

using namespace std;
///Buy A Shovel - Codeforces

int main()
{
    int k, r;
    int num = 0;
    cin >> k >> r;

    int k_org = k;

    while(r < k){
        r += 10;

        if(r >= k){
            if(r % k == 0){
                num = (r / k);
                cout << num;
                return 0;
            }
        }

        else{
            k += k_org;
        }

        //cout << "r: " << r << ".\n";
        //
        cout << "k: " << k << ".\n";
    }
}
