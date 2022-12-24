#include <iostream>

using namespace std;
///Sum square difference - Project Euler

int main()
{
    int small = 0;
    int big = 0;

    for(int i = 1; i <= 100; i++){
        small += (i*i);
        big += i;
    }

    big *= big;

    cout << (big - small);

    return 0;
}
