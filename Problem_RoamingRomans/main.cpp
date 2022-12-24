#include <iostream>

using namespace std;
///Roaming Romans - Kattis

int main()
{
    float miles;
    int form;
    cin >> miles;

    form = (((miles)*1000)*(5280))/(4854) + 0.5;

    cout << form;

    return 0;
}
