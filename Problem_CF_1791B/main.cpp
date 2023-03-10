#include <iostream>

using namespace std;
///Codeforces - B. Following Directions

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        int flag_x = 0, flag_y = 0;
        string response = "NO";
        cin >> n;

        string moves;
        cin >> moves;

        for(int j = 0; j < moves.length(); j++){
            if(moves[j] == 'U'){
                flag_y++;
            }

            else if(moves[j] == 'D'){
                flag_y--;
            }

            if(moves[j] == 'R'){
                flag_x++;
            }

            else if(moves[j] == 'L'){
                flag_x--;
            }

            if(flag_x == 1 && flag_y == 1){
                response = "YES";
            }
        }

        cout << response << endl;
    }
    return 0;
}
