#include <iostream>

using namespace std;
///Spell Check - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        string name;
        cin >> name;

        if(n == 5){
            int let_1 = 0;
            int let_2 = 0;
            int let_3 = 0;
            int let_4 = 0;
            int let_5 = 0;

            for(int i = 0; i < n; i++){
                if(name[i] == 'T'){
                    let_1++;
                }

                if(name[i] == 'i'){
                    let_2++;
                }

                if(name[i] == 'm'){
                    let_3++;
                }

                if(name[i] == 'u'){
                    let_4++;
                }

                if(name[i] == 'r'){
                    let_5++;
                }
            }

            if(let_1 == 1 && let_2 == 1 && let_3 == 1 && let_4 == 1 && let_5 == 1){
                cout << "YES" << "\n";
            }

            else{
            cout << "NO" << "\n";
        }
        }

        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
