#include <iostream>

using namespace std;

int main()
{
    /*
    double num_1 = 5.49;
    cout << num_1;
    cin >> num_1;
    cout << num_1;

    cout << "\n";

    float num_2 = 4.8;
    cout << num_2;
    cin >> num_2;
    cout << num_2;
    */

    /*
    string word = "Good Bad plot";
    cout << word[14];
    word[4] = 'B';
    cout << "\n" << word << "\n";

    cout << word.find("Bad", 0);
    */

    /*string deck[5] = {"fglk", "owld", "cjsmd", "irfn", "pqñs"};
    cout << deck[4][0];

    int x = 7;
    x = 10 - x;
    cout << x;*/

    string deck[52];
    int y = 0;

    for(int i = 0; i < 52; i++){  ///Create a deck based on the number of cases
        string card;
        cin >> card;
        deck[i] = card;
    }

    return 0;
}
