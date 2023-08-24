#include <iostream>

using namespace std;
///Codeforces - A. Escalator Conversations

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int counter = 0;
        int n,m,k,h;
        cin >> n >> m >> k >> h;

        for(int j = 0; j < n; j++){
            int x;
            cin >> x;

            x = abs(h-x);

            //cout << "Diff: " << x << "\tDiv: " << (x/k) << "\tMod: " << (x%k) << "\tCounter: " << counter << endl;

            if( x%k == 0 && (x/k) <= (m-1) && x > 0){
                counter++;
            }

        }

        cout << counter << endl;
    }

    return 0;
}
