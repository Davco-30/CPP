#include <iostream>

using namespace std;
///Crear un programa que tenga la siguiente sintáxois. Puedes crear variables adicionales
///Imprimir a y b con que estén invertidos los valores, sin modificarlos idrectamente.

int main()
{
    int a = 1;
    int b = 2;
    int *ptr = &a;

    int *ptr2 = &b;

    *ptr += *ptr2;
    *ptr2 = (*ptr)-*ptr2;
    *ptr = *ptr-*ptr2;
/*
    int c = ((*ptr2)-(*ptr));

    *ptr += c;
    *ptr2 -= c;
    cout << *ptr << endl;
*/
    cout << a << " " << b;

    return 0;
}
