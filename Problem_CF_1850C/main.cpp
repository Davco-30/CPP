#include <iostream>

using namespace std;
///Codeforces - C. Word on the Paper

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string word = "";
        string answer = "";

        for(int j = 0; j < 8; j++){
            string line;
            cin >> line;

            word += line;
        }

        for(int j = 0; j < word.length(); j++){
            if(word[j] != '.'){
                answer += word[j];
            }
        }

        cout << answer << endl;
    }
    return 0;
}
