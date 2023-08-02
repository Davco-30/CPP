#include <iostream>

using namespace std;
///OmegaUp - 1559. Pizzas

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int result = k, pieces = k;

    if(m % 2 == 0){
        result += (m/2);
    }

    else{
        result += (m/2)+1;
        pieces += 2;
    }

    n -= pieces;

    if(n <= 0){
        cout << result;
    }

    else{
        if(n <= 4){
            result++;
            cout << result;
        }

        else{
            result += (n/4)+1;
            cout << result;
        }
    }

    return 0;
}
