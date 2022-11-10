#include <iostream>

using namespace std;

int main()
{
    ///1

    int x;
    int n;
    int result = 1;

    cout << "Introduce 2 números y descubre el resultado al elevar el primer número por el segundo.\n";
    cin >> x >> n;

    for(int i = 0; i < n; i++){
        result = result*x;
    }

    cout << result;
    return 0;

    ///2
    /*
    int n;
    int result = 1;

    cout << "Introduce un número y descubre su función factorial.\n";
    cin >> n;

    for(int i = 1; i <= n; i++){
        result = result * i;
    }

    cout << result;

    return 0;
    */
}
