#include <iostream>

using namespace std;
///String Task - Codeforces

int main()
{
    string word;
    cin >> word;

    string result = "";

    for(int i = 0; i < word.length(); i++){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i'){
            continue;
        }

        else if(word[i] == 'o' || word[i] == 'u' || word[i] == 'y'){
            continue;
        }

        else if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I'){
            continue;
        }

        else if(word[i] == 'O' || word[i] == 'U' || word[i] == 'Y'){
            continue;
        }

        else{
            int letter = word[i];
            if(letter >= 65 && letter <= 90){
                letter += 32;
            }

            result += '.';
            result += letter;
        }
    }

    cout << result;

    return 0;
}
