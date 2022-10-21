#include <iostream>

using namespace std;
///Numberfun - Kattis

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        float a, b, c;
        cin >> a >> b >> c;

        if((a+b) == c || (a*b) == c){
            cout << "Possible" << "\n";
            continue;
        }

        if((a/b) == c || (a-b) == c){
            cout << "Possible" << "\n";
            continue;
        }

        if((b/a) == c || (b-a) == c){
            cout << "Possible" << "\n";
        }

        else{
            cout << "Impossible" << "\n";
        }
    }
    return 0;
}
