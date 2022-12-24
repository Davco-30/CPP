#include <iostream>

using namespace std;
///Two elevators - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i =  0; i < t; i++){
        int a, b, c, sum = 0;
        cin >> a >> b >> c;

        if(a == 1){
            a = 0;
        }

        else{
            a -= 1;
        }

        if(c == 1){
            sum = b-c;
        }

        else{
            if(b > c){
                sum = (b-c) + (c-1);
            }

            else{
                sum = (c-b) + (c-1);
            }
        }

        if(a < sum){
            cout << 1 << endl;
        }

        else if(a > sum){
            cout << 2 << endl;
        }

        else{
            cout << 3 << endl;
        }
    }
    return 0;
}
