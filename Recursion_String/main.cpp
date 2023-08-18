#include <iostream>

using namespace std;
///Leer un string. Debes de capitalizarlo.
///Implementalo de forma iterativa y recursiva.

string recursion(string word, int n);

int main()
{
    string word;
    cin >> word;

    int n = word.length();

    ///Forma iterativa.
 /*   string answer = "";
    for(int i = 0; i < word.length(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            answer += word[i] - 32;
            continue;
        }

        answer += word[i];
    }

    cout << answer;*/

    cout << "Repsuesta: " << recursion(word, n);

    return 0;
}

string recursion(string word, int n){   ///O(n)
    cout << "word: " << word << endl;
    char letter = word[n];
    if(n >= 0){
        if(word[n] >= 'a' && word[n] <= 'z'){
            letter -= 32;
        }
        cout << "word[" << n << "]: " << word[n] << endl;

        return recursion(word, n-1) +  letter;
    }

    return "";

}
