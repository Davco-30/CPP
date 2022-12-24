#include <iostream>

using namespace std;
///B. Atilla's Favorite Problem - Codeforces

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num, d = -1;
        string word;

        cin >> num >> word;

        for(int j = 0; j < num; j++){
            if(word[j] > d){
                d = word[j];
            }
        }

        cout << (d - 96) << endl;
    }
    return 0;
}
;
