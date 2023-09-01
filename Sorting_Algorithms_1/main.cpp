#include <iostream>
#include <string>

using namespace std;
///Ordenar un arreglo de números con algoritmos de ordenamiento.

void bubble_sort(int lista[], int length);
void selection_sort(int lista[], int length);

int main()
{
    ///Tamaño del arreglo
    int num;
    cout << "Introduce el tamaño del arreglo de personas que te gustaría crear: ";
    cin >> num;

    cout << endl;

    int arr[num];

    ///Arreglo.
    for(int i = 0; i < num; i++){
        ///Automático
        arr[i] = rand()%120;
    }

    bubble_sort(arr, num);
    selection_sort(arr, num);


    return 0;
}

void selection_sort(int lista[], int length){
    cout << "\n+ Selection sort." << endl;

    cout << "Lista original.\n";

    for(int i = 0; i < length; i++){
        cout << "* Valor " << i << ": " << lista[i] << endl;
    }

    for(int i = 0; i < length; i++){
        int pos = i;

        for(int j = 0; j < length-1; j++){
            if(lista[j] < lista[pos]){
                pos = j;
            }
        }

        int num = lista[pos];
        lista[pos] = lista[i];
        lista[i] = num;
    }

    cout << "\nLista ordenada.\n";

    for(int i = 0; i < length; i++){
        cout << "* Valor " << i << ": " << lista[i] << endl;
    }

}

void bubble_sort(int lista[], int length){
    cout << "\n+ Bubble sort." << endl;

    cout << "Lista original.\n";

    for(int i = 0; i < length; i++){
        cout << "* Valor " << i << ": " << lista[i] << endl;
    }

    for(int i = 0; i < length; i++){
        for(int j = 0; j < length-1; j++){
            if(lista[j] > lista[j+1]){
                int value_1 = lista[j];

                lista[j] = lista[j+1];
                lista[j+1] = value_1;
            }
        }
    }

    cout << "\nLista ordenada.\n";

    for(int i = 0; i < length; i++){
        cout << "* Valor " << i << ": " << lista[i] << endl;;
    }

}
