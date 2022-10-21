#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int letters = word.length();

    for(int i = 0; i < letters - 1; i++){
        if(word[i] == 's' && word[i+1] == 's'){
            cout << "hiss";
            return 0;
        }

    }

    cout << "no hiss";
}
