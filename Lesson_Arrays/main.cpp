#include <iostream>

using namespace std;

int main()
{
    ///1
    ///Leer n números e imprimir esos n números en el orden inverso en el que se leyeron.
    /*
    int n;

    cout << "Introduce un número.\n";
    cin >> n;

    int num[n];

    cout << "Ahora, inserta números individuales de acuerdo con el número que diste en el principio. \n";

    for(int i = n - 1; i >= 0; i--){
        cin >> num[i];
    }

    for(int i = 0; i < n; i++){
        cout << "El número de la posición " << i << " es: " << num[i] << "\n";
    }
    */

    ///2
    /*
    int n;

    cout << "Introduce un número.\n";
    cin >> n;

    int num[n];

    cout << "Ahora, inserta números individuales de acuerdo con el número que diste en el principio. \n";

    for(int i = 0; i < n; i++){
        cin >> num[n-i-1];
    }

    for(int i = 0; i < n; i++){
        cout << "El número de la posición " << i << " es: " << num[i] << "\n";
    }
    */

    return 0;
}
