#include <iostream>

using namespace std;
///Codeforces - A. IQ test

int main()
{
    int n;
    int even = 0, index_ev = 0, index_odd = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        if(num%2 == 0){
            even++;

            if(index_ev == 0){
                index_ev = i;
            }
        }

        else{
            if(index_odd == 0){
                index_odd = i;
            }
        }

    }

    if(even == 1){
        cout << index_ev;
    }

    else{
        cout << index_odd;
    }

    return 0;
}
