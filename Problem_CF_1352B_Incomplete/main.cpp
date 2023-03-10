#include <iostream>

using namespace std;
///B. Same Parity Summands - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;

        if(k > n){
            cout << "NO" << endl;
            continue;
        }

        if( (n % 2 == 1) && (k % 2 == 0) ){
            cout << "NO" << endl;
            continue;
        }

        if(n == 1){
            cout << "YES" << endl;
            cout << n << endl;
            continue;
        }

        int num = 1;
        int n3 = 0, mark = 0;

        while( (num*(k-1)) < n){
            int n2 = n - (num*(k-1));

            if( ((num*(k-1)) + n2) == n){
                if( (n2%2 == 0 && num%2 == 0) || (n2%2 == 1 && num%2 == 1)){
                    cout << "YES" << endl;
                    n3 = n2;
                    mark = 1;
                    break;
                }

                else{
                    num++;
                    continue;
                }
            }

            else{
                num++;
            }
        }

        if(mark == 1){
            for(int j = 0; j < k; j++){
                if(j == k-1){
                    cout << n3 << endl;

                }

                else{
                    cout << num << " ";
                }
            }
        }

        else{
            continue;
        }

    }
    return 0;
}
