#include <iostream>

using namespace std;

int main()
{
    int n; //Cases
    cin >> n;

    for(int i = 0; i < n; i++){
        string deck[52];
        int y = 0;

        for(int i = 1; i <= 52; i++){  ///Create a deck based on the number of cases
            string card;
            deck[i] = card;
            cin >> card;
        }

        int x = 0;

        for(int i = 0; i <= 2; i++){    ///Execute a 3 steps 3 times.

            int card_t = deck[27-x-i];    ///Define the new top card by substracting 25 from 52
            int x = card_t[0];          ///First value of the string is a number. If it's not, then take it as a 10

            if(card_t[0] >= 2 && card_t[0] <= 9){
                y = y + x;
            }

            else{
                y = y + 10;
            }

            x = 10 - x;

        }

        cout << deck[y];


    }

    return 0;
}
