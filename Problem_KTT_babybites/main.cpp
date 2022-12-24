#include <iostream>

using namespace std;
///Kattis - babybites

int convert_to_int(string word);

int main()
{
    int n;
    cin >> n;

    int mark = 0;

    for(int i = 0; i < n; i++){
        string key;
        cin >> key;

        int first = key[0];

        if(first < 109 ){
            if(convert_to_int(key) != i+1){
                mark = 1;
            }
        }
    }

    if(mark == 1){
        cout << "something is fishy";
    }

    else{
        cout << "makes sense";
    }

    return 0;
}

int convert_to_int(string word){
    int number = 0;
    ///586
    for(int j = 0; j < word.length(); j++){
        number *= 10;
        number += word[j] - '0';
        ///number = 5*10 = 50+ 8 = 58*10 = 580+6
    }
    return number;
}
