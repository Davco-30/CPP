#include <iostream>

using namespace std;

int main()
{
    cout << "Por favor, oingrese la edad de la persona: \n" << endl;
    int age;
    cin >> age;

    if(age < 18){
        cout << "La persona es menor de edad.";
    }

    else{
        cout << "La persona es mayor de edad.";
    }

    return 0;
}
