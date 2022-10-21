#include <iostream>

using namespace std;

int main()
{
    int n, difference;
    int limit_1 = INT_MAX, limit_2 = INT_MIN;

    while(cin >> n){
        int num;
        cin >> num;

        if(num < limit_1){
            limit_1 = num;
        }

        if(num > limit_2){
            limit_2 = num;
        }

        difference = limit_2 - limit_1;

        cout << limit_1 << " " << limit_2 << " " << difference;

    }


    return 0;
}
