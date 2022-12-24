#include <iostream>

using namespace std;
/// Even Fibonacci numbers - Project Euler

int main()
{
    int a = 1;
    int b = 2;
    int n = 0;
    int m = 0;

    int sum = 0;

    while(a <= 4000000 && b <= 4000000){
        n = a+b;
        m = n+b;

        if(a % 2 == 0){
            sum += a;
        }

        else if(b % 2 == 0){
            sum += b;
        }

        a = n;
        b = m;
    }

    cout << sum;

    return 0;
}
