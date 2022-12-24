#include <iostream>

using namespace std;
///Elephant - Codeforces

int main()
{
    int house;
    cin >> house;

    if(house % 5 == 0){
        cout << (house / 5);
    }

    else{
        cout << (house / 5) + 1;
    }

    return 0;
}
