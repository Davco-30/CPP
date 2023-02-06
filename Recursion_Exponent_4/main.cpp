#include <iostream>

using namespace std;

long long int exponent(long long int n, long long int x);

int main()
{
    long long int n, x;
    cin >> n >> x; ///3,4 = 3^4

    cout << "El resultado de la operación es: " << exponent(n,x);

    return 0;
}

///n=3, x= 4
long long int exponent(long long int n, long long int x){
    if(x != 0){
        return (n*exponent(n,x-1))%(1000000007); /// (3*exp(3,2)) > (3*exp(3,1)) = 27 > (3*exp(3,0)) = 9 > (3)
    }

    else{
        return 1;
    }
}
