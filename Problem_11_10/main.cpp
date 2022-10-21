#include <iostream>

using namespace std;
///Basketballoneonone - Kattis

int main()
{
    string game;
    cin >> game;

    int a_score = 0;
    int b_score = 0;

    int length = game.size();


    for(int i = 0; i <= length + 1; i += 2){
        if(game[i] == 'A'){
            if(game[i+1] == '1'){
                a_score++;
            }

            else{
                a_score += 2;
            }
        }

        if(game[i] == 'B'){
            if(game[i+1] == '1'){
                b_score++;
            }

            else{
                b_score += 2;
            }
        }

        if(a_score >= 11 && (b_score+2) <= a_score){
            cout << "A";
            return 0;
        }

        if(b_score >= 11 && (a_score+2) <= b_score){
            cout << "B";
            return 0;
        }

    }

}
