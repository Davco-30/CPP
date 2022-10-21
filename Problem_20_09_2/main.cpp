#include <iostream>

using namespace std;
///Beautiful Matrix - Codeforces

int main()
{
    ///Center = i = 3, j = 3
    int moves = 0;

    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            int digit;
            cin >> digit;

            if(digit == 1){
                moves += abs(3 - i) + abs(3 - j);
            }
        }
    }

    cout << moves;

    return 0;

}
