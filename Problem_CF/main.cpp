#include <iostream>

using namespace std;
///Codeforces -B. MKnez's ConstructiveForces Task

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        if(n % 2 == 0){
            cout << "YES" << endl;
            for(int j = 1; j <= n; j++){
                if(j % 2 == 0){
                    if(j == n){
                        cout << "1" << endl;
                    }

                    else{
                        cout << "1 ";
                    }
                }

                else{
                    cout << "-1 ";
                }
            }
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
