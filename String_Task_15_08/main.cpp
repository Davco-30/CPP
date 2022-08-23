#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    for(int i = 0; i < word.length; i++){
        if(word[i] == 'a' /*|| word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'*/){
            word[i] == '.';
        }

        else{
            word[i] == '.';
        }
    }

    cout << word;

    return 0;
}
