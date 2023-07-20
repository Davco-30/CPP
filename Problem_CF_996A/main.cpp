#include <iostream>

using namespace std;
///Codeforces - A. Hit the Lottery

int main()
{
    long long int bills;
    cin >> bills;

    long long int result = 0;

    if(bills >= 100){
        result += bills/100;
        bills -= result*100;
    }

    if( bills >= 30 && bills < 100){
        result += bills/20;

        if( (bills / 10)%2 == 0){
            bills -= (bills/20)*20;
        }

        else{
            result += 1;
            bills -= (bills / 20)*20 + 10;
        }
    }

    else if(bills < 30 && bills >= 10){
        result++;

        bills %= 10;
    }

    if(bills < 10){

        if(bills >= 5){
            result++;
            bills -= 5;
        }

        if(bills < 5){
            result += bills;
        }

    }

    cout << result << endl;

    return 0;
}
