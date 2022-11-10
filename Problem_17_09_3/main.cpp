#include <iostream>

using namespace std;
///Left Beehind - Kattis

int main()
{
    int x, y;

    while(cin >> x){
        cin >> y;

        if(x == y){
            if(x == 0 && y == 0){
                break;
            }
            cout << "Undecided.\n";
        }

        if(x + y == 13){
            cout << "Never speak again.\n";
            continue;
        }

        if(x > y){
            cout << "To the convention.\n";
        }

        if(x < y){
            cout << "Left beehind.\n";
        }

    }

    return 0;
}
