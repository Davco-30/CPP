#include <iostream>

using namespace std;
///El usuario va a pensar n un n�mero aleatorio entre 1 y 100. Mi programa deber� hacerle preguntas al usuario
///de S� o NO y debe de adivinar cu�l es el n�mero del usuario.

int main()
{
    string answer;

    cout << "Piensa en un n�mero del 1 al 100.\n";

    for(int i = 1; i <= 100; i++){
        string answer;
        cout << "�Tu n�mero es " << i << "?\n";
        cin >> answer;

        if(answer == "SI"){
            cout << "ADIVIN�!!! Tu n�mero es " << i << ".\n";
            return 0;
        }

    }
}
