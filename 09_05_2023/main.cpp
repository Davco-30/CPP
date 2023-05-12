#include <iostream>

using namespace std;

///Codeforces - A. Love Story

int main()
{
    int n;
    cin >> n;

    string original = "codeforces";

    for(int i = 0; i < n; i++){
        int num_diff = 0;
        string word;
        cin >> word;

        for(int j = 0; j < word.length(); j++){
            if(word[j] != original[j]){
                num_diff++;
            }
        }

        cout << num_diff << endl;
    }

    return 0;
}
