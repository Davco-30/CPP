#include <iostream>

using namespace std;
///Chat room - Codeforces

int main()
{
    string type;
    int flag1 = 0;
    cin >> type;

    string word = "";

    for(int i = 0; i < type.length(); i++){
        if(type[i] == 'h'){
            if(flag1 == 0){
                word += type[i];
                flag1++;
            }
        }

        if(type[i] == 'e'){
            if(flag1 == 1){
                word += type[i];
                flag1++;
            }
        }

        if(type[i] == 'l'){
            if(flag1 == 2 || flag1 == 3){
                word += type[i];
                flag1++;
            }
        }

        if(type[i] == 'o'){
            if(flag1 == 4){
                word += type[i];
                flag1++;
            }
        }
    }

    if(word == "hello"){
        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}
