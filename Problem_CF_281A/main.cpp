#include <iostream>

using namespace std;
///Codeforces - A. Word Capitalization

int main()
{
    string word;
    cin >> word;

    if(word[0] >= 97){
        word[0] -= 32;
    }

    cout << word;
    return 0;
}
