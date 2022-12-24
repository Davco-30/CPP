#include <iostream>

using namespace std;
///Anton and Danik - Codeforces

int main()
{
    int num;
    int anton_G = 0;

    cin >> num;

    string game;
    cin >> game;

    for(int i = 0; i < num; i++){
        if(game[i] == 'A'){
            anton_G++;
        }
    }

    num -= anton_G;

    if(num > anton_G){
        cout << "Danik";
    }

    if(num < anton_G){
        cout << "Anton";
    }

    if(num == anton_G){
        cout << "Friendship";
    }

    return 0;
}
