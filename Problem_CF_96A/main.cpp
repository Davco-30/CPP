#include <iostream>

using namespace std;
///Codeforces - A. Football

int main()
{
    string players;
    cin >> players;

    char flag0 = 'A', flag1 = 'B';
    int number01 = 0;

    for(int i = 0; i < players.length(); i++){ ///11101011000101010000100111110111111
        if(players[i] == '0'){
            if(flag1 == 'B'){
                flag1 = 'A';
                number01 = 0;
            }
            flag0 = 'B';
            number01++;
        }

        else if(players[i] == '1'){
            if(flag0 == 'B'){
                flag0 = 'A';
                number01 = 0;
            }
            flag1 = 'B';
            number01++;
        }

        if(number01 >= 7){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
