#include <iostream>

using namespace std;
///Codeforces - A. Word

int main()
{
    ///1
/*    string word;            int upper = 0;
    cin >> word;

    int length = word.length();

    for(int i = 0; i < length; i++){
        if(word[i] <= 'Z'){
            upper++;
        }
    }

    if(upper <= length/2){
        for(int i = 0; i < length; i++){
            if(word[i] <= 'Z'){
                word[i] += ' ';
            }
        }

        cout << word;
    }

    else{
        for(int i = 0; i < length; i++){
            if(word[i] >= 'a'){
                word[i] -= ' ';
            }
        }

        cout << word;
    }
*/
    ///2
    string word, answer1 = "", answer2 = "";            int upper = 0;
    cin >> word;

    int length = word.length();

    for(int i = 0; i < length; i++){
        char letter = word[i];
        if(word[i] <= 'Z'){
            upper++;
            answer1 += letter;

            letter += ' ';
            answer2 += letter;
        }

        else{
            answer2 += letter;
            letter -= ' ';
            answer1 += letter;
        }
    }

    if(upper > (length/2)){
        cout << answer1;
    }

    else{
        cout << answer2;
    }

    return 0;
}
