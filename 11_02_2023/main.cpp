#include <iostream>

using namespace std;
///Codeforces - A. Yes-Yes?

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        int flag = 0;
        cin >> word;

        for(int j = 0; j < word.length()-1; j++){
            if(word[j] == 'e' && word[j+1] != 's'){
                flag = 1;
                break;
            }

            else if(word[j] == 's' && word[j+1] != 'Y'){
                flag = 1;
                break;
            }

            else if(word[j] == 'Y' && word[j+1] != 'e'){
                flag = 1;
                break;
            }

            if(word[j] != 'Y' && word[j] != 'e' && word[j] != 's'){
                flag = 1;
                break;
            }
        }

        if(word.length() == 1){
            if(word[0] != 'Y' && word[0] != 'e' && word[0] != 's'){
                flag = 1;
            }
        }

        if(flag == 0){
            cout << "YES\n";
        }

        else{
            cout << "NO\n";
        }

    }
    return 0;
}
