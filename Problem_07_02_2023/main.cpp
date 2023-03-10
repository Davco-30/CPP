#include <iostream>

using namespace std;
///Recibir un string y debes de indicar la longitud del substring que sea palíndromo más largo.

///radarosoalareconocerk
///radar oso ala reconocer

int main()
{
    string word;
    cin >> word;

    int result = 0;
    int m = word.length();
    string sub_word = "";

    for(int i = 0; i < (m); i++){ ///radaroso
        int right = m-1, left = i;
        int sub_str = 0, flag = 0;
        string answer = "";

        cout << "left: " << word[left] << endl;
        cout << "right: " << word[right] << endl;

        while(i < right){
            if(word[left] == word[right]){
                if(flag == 0){
                    flag = 1;
                    answer = word.substr(left,(right-left+1));
                }
                sub_str += 1;
                left++;
            }

            else{
                if(flag == 1){
                    sub_str = 0;
                    break;
                }
            }

            right--;
            cout << "left: " << word[left] << endl;
            cout << "right: " << word[right] << endl;
        }

        if(sub_str > result){
            result = sub_str+1;
            sub_word = answer;
        }

        cout << "Answer" << "(" << i << "): " << answer << "\n" << endl;
    }

    cout << "Longitud: " << (result) << endl;
    cout << "Palabra: " << sub_word;

    return 0;
}

