#include <iostream>

using namespace std;
///	Tarifa - Kattis

int main()
{
    int x; //limit
    cin >> x;

    int n; //no. of months
    int result = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int exp; //expenses
        cin >> exp;

        if(x >= exp){
            result = result + (x - exp);
        }

        if(exp > x){
            result = result - (exp - x);
        }

        //cout << "Result = " << result << "\n";
    }

    result = result + x;

    cout << result;

    return 0;
}
