#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;    //Number of words/testcases
    cin >> t;

    for(int i = 0; i < t; i++){
        int n; //Length of a word
        cin >> n;

        int points = 0;

        string solutions;

        for(int j = 0; j < n; j++){
            cin >> solutions[j];
        }

        for(int j = 0; j < n; j++){
            int letter_count = 0;

            if(solutions[j] == solutions[k]){
                points = points - 1;
        }

        cout << points << "\n";
    }

    return 0;
}
