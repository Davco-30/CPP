#include <iostream>

using namespace std;
///battlesimulation - Kattis

int main()
{
    string monst = "";
    string mech = "";
    cin >> monst;

    for(int i = 0; i < monst.length(); i++){
        int sum = monst[i] + monst[i+1] + monst[i+2];

        if(sum == 224){
            /*cout << "Pos. inicial: " << i << endl;
            cout << "Pos. final: " << (i+2) << endl;*/
            mech += 'C';
            i += 2;
        }

        else{
            if(monst[i] == 'R'){
                mech += 'S';
            }

            else if(monst[i] == 'B'){
                mech += 'K';
            }

            else{
                mech += 'H';
            }
        }

    }

    cout << mech;

    return 0;
}
