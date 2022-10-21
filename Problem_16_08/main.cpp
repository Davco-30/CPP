#include <iostream>

using namespace std;

///Boy or Girl - Codeforces

int main()
{
    string user;
    cin >> user;

    int range = user.length();
    int num = range;

    cout << num;

    for(int i = 0; i < range; i++){
        int a = 1;

        for(int j = i + 1; j < range; j++){  ///for(int j = i; j < range; j++) Revisar
            if(user[i] == user[j]){
                a = a + 1;
            }

        }

        if(a > 1){
            num = num - 1;
        }

    }

    cout << num;

    if(num % 2 == 0){
        cout << "CHAT WITH HER!";
    }

    else{
        cout << "IGNORE HIM!";
    }

}
