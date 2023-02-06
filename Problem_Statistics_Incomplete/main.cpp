#include <iostream>

using namespace std;
///Statistics - Kattis

int main()
{
    int cases = 1;

    while(cases <= 10){
        int n;
        int small = 1000001, big = -1000001;
        cin >> n;

        for(int i = 0; i < n; i++){
            int num;
            cin >> num;

            if(num < small){
                small = num;
            }

            if(num > big){
                big = num;
            }
        }

        cout << "Case " << cases << ": " << small << " " << big << " " << (big-small) << endl;
        cases++;
    }
    return 0;
}
