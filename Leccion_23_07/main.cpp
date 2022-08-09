#include <iostream>

using namespace std;

///1. Leer un string (una palabra) e imprimirla al revés.
///2. Leer una palabra e indicar si es un palíndromo.

int main()
{
    ///1
    /*
    string word;
    cin >> word;

    int n = word.length();

    cout << "\n";

    for(int i = n-1; i >= 0; i--){
        cout << word[i];
    }
    */

    ///2
    string word;
    cin >> word;

    int l = word.length();
    int n = (word.length()) - 1;
    int h = n / 2;

    for(int i = 0; i <= h; i++){
        if(word[i] == word[n-i]){
            word[i] = '1';
            word[n-i] = '1';
        }
    }

    for(int i = 0; i < l; i++){
        if(word[i] != '1'){
            cout << "No es un palíndromo.";
            return 0;
        }
    }

    cout << "Esta palabra es un palíndromo.\n";
    return 0;
}
