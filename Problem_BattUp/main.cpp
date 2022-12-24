#include <iostream>

using namespace std;
///Batter_Up - Kattis

int main()
{
    float n, points;
    cin >> n;

    float n_2 = n;

    for(int i = 0; i < n; i++){
        float bats;
        cin >> bats;

        if(bats < 0){
            n_2 += bats;
        }

        else{
            points += bats;
        }
    }

    float result = points/n_2;
    cout << result;

    return 0;
}
