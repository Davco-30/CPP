#include <iostream>

using namespace std;

int main()
{
    ///________________1
/*
    string cadena;
    cin >> cadena;

    cout << "\n";
    //cout << cadena[0];

    for(int i = (cadena.length() - 1); i >= 0; i--){
        cout << cadena[i];
*/

    ///________________2
    string cadena = "cadena";
    string rest = "";

    for(int i = (cadena.length() - 1); i >= 0; i--){
        rest += cadena[i];
    }

    cout << rest;

    return 0;
}
