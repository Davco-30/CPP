#include <iostream>

using namespace std;
///Bit++ - Codeforces

int main()
{
    int n;
    int x = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        string bit;
        cin >> bit;

        if(bit[1] == '+'){
            x++;
        }

        if(bit[1] == '-'){
            x--;
        }
    }

    cout << x;

    return 0;
}
