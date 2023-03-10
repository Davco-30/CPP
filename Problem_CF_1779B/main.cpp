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
            for(int j = 0; j < n; j++){
                if(j % 2 == 0){
                    cout << "1 ";
                }

                else{
                    cout << "-1 ";
                }
            }

            cout << "\n";
        }

        else if(n % 2 == 1 && n > 3){
            cout << "YES" << endl;
            int num1 = (n-2)/2,  num2= ((n-2)/2)+1;

            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    cout << num1 << " ";
                }

                else{
                    cout << -num2 << " ";
                }
            }
            cout << "\n";
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
