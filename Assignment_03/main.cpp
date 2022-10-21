#include <iostream>

using namespace std;

int main()
{
    ///1

    ///Tienes n amigos y n caja de dulces. Cada caja tiene una cantidad arbitraria de dulces que asignará el usuario.
    ///Sin embargo, cada caja debe contener la misma cantidad de dulces al final. Haz que cada caja obtenga la misma cantidad de dulces, comiendote la
    ///mínima cantidad de dulces en total y despliegala.

    int n_1;

    cout << "Quiero recordar. Para el día de la amistad, ¿cuantos amigos quiero regalar estas cajas de dulces que compré ayer?" << endl;

    cin >> n_1;

    cout << "Ah cierto, tengo " << n_1 << " cajas de dulces para mis " << n_1 << " amigos.\n\n";

    int n_q1[n_1];

    cout << "Pero la tienda me había estafado, porque la cantidad de dulces era diferente en cada caja.\n";
    cout << "¿Cuál es la cantidad de dulces dentro de cada caja?\n";

    for(int i = 0; i < n_1; i++){
        cin >> n_q1[i];
    }

    int min_1 = INT_MAX;

    for(int i = 0; i < n_1; i++){
        if(n_q1[i] < min_1){
            min_1 = n_q1[i];
        }
    }

    int dif = 0;
    int min_2 = 0;

    for(int i = 0; i < n_1; i++){
        dif = n_q1[i] - min_1;
        min_2 = min_2 + dif;
    }

    cout << "\n La caja con menos dulces tiene " << min_1 << ".\n";
    cout << "Para igualar la cantidad de cada caja, debo comer en total " << min_2 << ".\n";

    return 0;
}
