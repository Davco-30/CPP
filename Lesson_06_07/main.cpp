#include <iostream>

using namespace std;

///1. Inicialmente, leerás un número n. Después, leerás un arreglo de n números. Y después, leerás otro arreglo de n números.
///   Debes indicar imprimiendo un 1 o un 0, si estos arreglos son anagramas el uno del otro.
/// array[1,5,4,8,9]
/// array_2[4,5,8,1,9]

int comp_function(int array_1[], int array_2[], int length);

int main()
{
    int n;

    cin >> n;

    cout << "\n";

    int array_1[n];
    int array_2[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << "\n";

    for(int i = 0; i < n; i++){
        cin >> array_2[i];
    }

    ///Complejidad = O(2n) => O(n)

    cout << "\n" << comp_function(array_1, array_2, n);

    return 0;
}

int comp_function(int array_1[], int array_2[], int length){

    for(int i = 0; i < length; i++){
        for(int j = 0; j < length; j++){

                if(array_1[i] == array_2[j]){
                    array_1[i] = -1;
                    array_2[j] = -1;
                }

        }
    }

    for(int i = 0; i < length; i++){
        if(array_1[i] != -1){
            return 0;
        }
    }

    return 1;

}

