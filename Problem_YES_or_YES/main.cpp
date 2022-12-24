#include <iostream>

using namespace std;
///A. YES or YES? - Codeforces

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string word;
        cin >> word;

        if(word[0] == 'y' || word[0] == 'Y'){
            if(word[1] == 'e' || word[1] == 'E'){
                if(word[2] == 's' || word[2] == 'S'){
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

        else{
            cout << "NO\n";
        }

    }

    return 0;
}
