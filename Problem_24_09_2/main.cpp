#include <iostream>

using namespace std;
///Nasty Hacks - Kattis

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int r, e, c;
        cin >> r >> e >> c;

        e -= c;
        if(r > e){
            cout << "do not advertise" << "\n";
            continue;
        }

        if(e > r){
            cout << "advertise" << "\n";
        }

        else{
            cout << "does not matter" << "\n";
        }
    }

    return 0;
}
