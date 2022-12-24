#include <iostream>

using namespace std;
///Nearly Lucky Number - Codeforces

int main()
{
    string num;
    cin >> num;

    int luck_num = 0;
    int length = num.size();

    for(int i = 0; i < length; i++){
        if(num[i] == '4' || num[i] == '7'){
            luck_num = luck_num + 1;
        }

    }

    if(luck_num == 4 || luck_num == 7){
        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}
