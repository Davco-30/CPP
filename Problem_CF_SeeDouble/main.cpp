#include <iostream>

using namespace std;
///Codeforces - A. SSeeeeiinngg DDoouubbllee

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string word;
        cin >> word;

        string palindrome = word;

        for(int j = (word.length() - 1); j >= 0 ; j--){
            palindrome += word[j];
        }

        cout << palindrome << endl;
    }
    return 0;
}
