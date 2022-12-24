#include <iostream>

using namespace std;
///vote - Kattis

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int votes, winner = 0, amount = 0, diff = 1, sum = 0;
        int prev = 0;
        cin >> votes;

        for(int k = 0; k < votes; k++){
            int num;
            cin >> num;

            sum += num;

            if(num > amount){
                winner = (k+1);
                amount = num;
            }

            if(num == prev){
                diff++;
            }

            prev = num;
        }

        if(diff == votes){
            cout << "no winner\n";
        }

        else{
            sum -= amount;

            if(sum >= amount){
                cout << "minority winner " << winner << endl;
            }

            else{
                cout << "majority winner " << winner << endl;
            }
        }
    }

    return 0;
}
