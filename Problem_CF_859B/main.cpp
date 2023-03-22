#include <iostream>

using namespace std;
///Codeforces - B. Grab the Candies

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int even = 0, odd = 0;
        int n;
        cin >> n;

        for(int j = 0; j < n; j++){
            int candies;
            cin >> candies;

            if(candies % 2 == 0){
                even += candies;
            }

            else{
                odd += candies;
            }
        }

        if(even > odd){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }
    }
    return 0;
}
