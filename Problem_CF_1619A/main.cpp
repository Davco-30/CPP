#include <iostream>
#include <string.h>

using namespace std;
///Codeforces - A. Square String?

int main()
{
    int t;
    cin >> t;
///1
/*
    for(int i = 0; i < t; i++){
        string word;        int mark = 0;
        cin >> word;

        int num = word.length();

        if(num % 2 == 0){
            for(int j = 0; j < (num/2); j++){
                if(word[j] != word[(num/2)+j]){
                    cout << "NO" << endl;
                    mark = 1;
                    break;
                }
            }

            if(mark == 0){
                cout << "YES" << endl;
            }
        }

        else{
            cout << "NO" << endl;
        }
    }
*/

///2
    for(int i = 0; i < t; i++){
        string word;
        cin >> word;

        int num = word.length();

        if(num % 2 == 0){
            string sub_word1 = word.substr(0,(num/2));
            string sub_word2 = word.substr((num/2),num-1);

            if(sub_word1 == sub_word2){
                cout << "YES\n";
            }

            else{
                cout << "NO\n";
            }
        }

        else{
            cout << "NO\n";
        }

    }
    return 0;
}
