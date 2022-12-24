#include <iostream>

using namespace std;
/// Next Round - Codeforces

int main()
{
    int n; //Number of contestants
    cin >> n;

    int players[n];

    int k; //The contestant to surpass
    cin >> k;

    for(int i = 0; i < n; i++){
        cin >> players[i];
    }

    int wins = 0;

    for(int i = 0; i < n; i++){
        if(players[i] >= players[k-1] && players[i] > 0){
            wins = wins + 1;
        }

    }

    cout << wins;

    return 0;
}
