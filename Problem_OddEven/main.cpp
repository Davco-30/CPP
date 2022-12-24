#include <iostream>

using namespace std;
///Oddities - Kattis

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        if(number % 2 == 0){
            cout << number << " is even" << "\n";
        }

        else{
            cout << number << " is odd" << "\n";
        }
    }
    return 0;
}
