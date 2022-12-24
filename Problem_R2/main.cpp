#include <iostream>

using namespace std;
///R2 - Kattis

int main()
{
    int num_1, mean, num_2;

    cin >> num_1 >> mean;

    num_2 = (2*mean) - (num_1);
    cout << num_2;

    return 0;
}
