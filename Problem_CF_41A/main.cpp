#include <iostream>

using namespace std;
///Codeforces - A. Translation

int main()
{
    string word, transl;
    cin >> word >> transl;

    if(word.length() == transl.length()){
        for(int i = 0; i < word.length(); i++){
            if(word[i] != transl[transl.length()-i-1]){
                cout << "NO";
                return 0;
            }
        }

        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}
