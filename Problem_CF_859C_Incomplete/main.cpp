#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string word;
        int letters[25] = {0};

        for(int j = 0; j < word.length(); j++){
            int num = word[j] - 97;
            letters[num] += 1;
        }

        int letters_2[25], post = 0;
        int flag = 0;

        for(int j = 0; j < letters.length(); j++){
            if(letters[j] > 1){
                flag = 1;
                letters_2[post] += letters[j] + 97;
                post++;
            }
        }

        for(int ){

        }
    }
    return 0;
}
