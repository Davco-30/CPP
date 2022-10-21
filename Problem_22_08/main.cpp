#include <iostream>

using namespace std;

///Bear and Big Brother - Codeforces

int main()
{
    int a, b;
    cin >> a; //Limak
    cin >> b; //Bob

    for(int i = 1; i <= 10; i++){
        if(a > b){
            cout << i;
            return 0;
        }

        a = a*3;
        b = b*2;

        if(a > b){
            cout << i;
            return 0;
        }
    }
}
