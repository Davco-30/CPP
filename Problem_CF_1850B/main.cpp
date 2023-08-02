#include <iostream>

using namespace std;
///Codeforces - B. Ten Words of Wisdom

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int winner = 0, amount = 0;

        for(int j = 0; j < n; j++){
            int a, b;
            cin >> a >> b;

            if(a <= 10 && b > amount){
                winner = j+1;
                amount = b;
            }

        }

        cout << winner << endl;
    }
    return 0;
}
