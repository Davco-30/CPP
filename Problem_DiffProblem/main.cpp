#include <iostream>

using namespace std;
/// A different problem - Kattis

int main()
{

    long long int num_1, num_2, diff;

    while(cin >> num_1){
        cin >> num_2;

        if(num_2 > num_1){
            diff = num_2 - num_1;
        }

        else{
            diff = -(num_2 - num_1);
        }

        cout << diff << "\n";
    }

    return 0;
}
