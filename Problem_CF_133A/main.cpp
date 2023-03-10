#include <iostream>

using namespace std;
///Codeforces - A. HQ9+

int main()
{
    string code;
    cin >> code;

    for(int i = 0; i < code.length(); i++){
        if(code[i] == 57 || code[i] == 72 || code[i] == 81){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
