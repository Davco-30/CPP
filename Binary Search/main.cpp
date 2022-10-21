#include <iostream>

using namespace std;
///El usuario va a pensar n un número aleatorio entre 1 y 100. Mi programa deberá hacerle preguntas al usuario
///de SÍ o NO y debe de adivinar cuál es el número del usuario.

int main()
{
    string answer;

    cout << "Piensa en un número del 1 al 100.\n";

    for(int i = 1; i <= 100; i++){
        string answer;
        cout << "¿Tu número es " << i << "?\n";
        cin >> answer;

        if(answer == "SI"){
            cout << "ADIVINÉ!!! Tu número es " << i << ".\n";
            return 0;
        }

    }
}
