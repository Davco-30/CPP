#include <iostream>

using namespace std;
///Online Judge - 11799

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int clown = 0;

        for(int j = 0; j < n; j++){
            int speed;
            cin >> speed;

            if(speed > clown){
                clown = speed;
            }
        }

        cout << "Case " << (i+1) << ": " << clown << endl;
    }
    return 0;
}
