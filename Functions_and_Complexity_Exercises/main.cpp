#include <iostream>

using namespace std;

///1. Crear una función que reciba un arreglo y su tamaño y retorne TRUE si el arreglo esta ordenado de menor a mayor o FALSO si no.

///2. Misma función que 1, pero con un sólo for.

///3. Crear una función que reciba un arreglo, su tamaño y un entero k. La función debe retornar la posición en el arreglo donde
///     se encuentra el valor k.

///4. Crear una función que reciba un arreglo, su tamaño y un entero k. La función debe retornar cuantas veces aparece k en el arreglo.

///5. Crear una función que reciba un arreglo y su tamaño y retorne el valor del segundo mayor elemento.

///6. Crear una función que recibirá un arreglo y su tamaño. El arreglo representará la edad de distintas personas.
///    Debes de retornar cuantas personas de ese arreglo son menores de edad.

///7. Misma función que el 6, pero determinar cuantos son mayores de edad.

///8. Crear una función que reciba un arreglo y su longitud. Debe retornar 1 si la mayoría es menor de edad, 2 si la mayoría es mayor de edad
///     o 0 si hay un empate.

///9 Crear una función que reciba un arreglo, su longitud, un entero l y un entero r. Retornar la suma de todos los elementos desde la posición l
///     hasta la posición r del arreglo.


bool function_1(int array_1[], int length);
bool function_2(int array_1[], int length);
int function_3(int array_1[], int length, int num_k);
int function_4(int array_1[], int length, int num_k);
int function_5(int array_1[], int length);
int function_6(int array_1[], int length);
int function_7(int array_1[], int length);
int function_8(int array_1[], int length);
int function_9(int array_1[], int length, int num_L, int num_R);


int main()
{
    cout << "Introduce un número.\n";
    int n;
    cin >> n;

    cout << "\n";

    cout << "Introduce más números dependiendo del que acabas de introducir.\n";

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    ///1.
    //cout << "\n";
    //cout << function_1(array_1, n) << "\n";


    ///2
    //cout << "\n";
    //cout << function_2(array_1, n) << "\n";


    ///3
    /*
    cout << "\n";
    cout << "Finalmente, introduce un sólo número y encuentra la posición en la que se encuentra en la lista de números que acabas de escribir.\n";

    int num_k;
    cin >> num_k;

    cout << "\n";

    cout << "La posición en la que se encuentra el número " << num_k << " es: " << function_3(array_1, n, num_k) << "\n";
    */


    ///4
    /*
    cout << "\n";
    cout << "Finalmente, introduce un sólo número y encuentra la posición en la que se encuentra en la lista de números que acabas de escribir.\n";

    int num_k;
    cin >> num_k;

    cout << "\n";

    if(function_4(array_1, n, num_k) > 1 || function_4(array_1, n, num_k) == 0){
        cout << "El número de veces que aparece el número " << num_k << " es: " << function_4(array_1, n, num_k) << " veces.\n";
    }

    if(function_4(array_1, n, num_k) == 1){
        cout << "El número de veces que aparece el número " << num_k << " es: " << function_4(array_1, n, num_k) << " vez.\n";
    }
    */

    ///5
    /*
    cout << "\n";
    cout << "El segundo mayor elemento de la lista de números que escribiste es: " << function_5(array_1, n) << "\n";
    */

    ///6
    /*
    cout << "\n";
    cout << "De acuerdo con esta lista de números(que representan edades de diferentes personas), la cantidad de menores de edad son: " << function_6(array_1, n)  << "\n";*/


    ///7
    /*
    cout << "\n";
    cout << "De acuerdo con esta lista de números(que representan edades de diferentes personas), la cantidad de mayores de edad son: " << function_7(array_1, n) << "\n";*/


    ///8
    /*
    cout << "\n";
    cout << function_8(array_1, n);*/


    ///9
    /*
    cout << "\n";

    cout << "Ahora, determina de qué a qué posición del arreglo quieres que se haga la suma(sólo ingresa números existentes como posiciones en el arreglo):\n";

    int num_L;
    cin >> num_L;
    cout << "La posición para empezar a sumar los números del arreglo es: " << num_L;

    int num_R;
    cin >> num_R;
    cout << "La posición para terminar de sumar los números del arreglo es: " << num_R;

    cout << "La suma dada desde la posición " << num_L << "hasta la posición " << num_R << "de la lista de números que ingresaste es: " << function_9(array_1, n, num_L, num_R) << "\n";
    */

    return 0;
}


///Complejidad: O(num_R - num_L) => O(num_R)
int function_9(int array_1[], int length, int num_L, int num_R){   ///9

    int sum_LR = 0;

    for(int i = num_L; i <= num_R; i++){
        sum_LR = sum_LR + array_1[i];
    }

    return sum_LR;

}


///Complejidad: O(3*length) => O(length)
int function_8(int array_1[], int length){                          ///8
    if(function_6(array_1, length) > function_7(array_1, length)){
        return 1;
    }

    if(function_6(array_1, length) < function_7(array_1, length)){
        return 2;
    }

    if(function_6(array_1, length) == function_7(array_1, length)){
        return 0;
    }
}


///Complejidad: O(1 + length) => O(length)
int function_7(int array_1[], int length){                  ///7
    int num_old = length - function_6(array_1, length);

    return num_old;
}


///Complejidad: O(length)
int function_6(int array_1[], int length){          ///6
    int num_young = 0;

    for(int i = 0; i < length; i++){
        if(array_1[i] < 18){
            num_young = num_young + 1;
        }
    }

    return num_young;
}


///Complejidad: O(2*length) => O(length)
int function_5(int array_1[], int length){          ///5

    int num_small = INT_MIN;

    for(int i = 0; i < length; i++){
        if(array_1[i] > num_small){
            num_small = array_1[i];
        }
    }

    int num_small_B = INT_MIN;

    for(int i = 0; i < length; i++){
        if(array_1[i] > num_small_B && array_1[i] < num_small){
            num_small_B = array_1[i];
        }
    }

    return num_small_B;
}

///Complejidad: O(length)
int function_4(int array_1[], int length, int num_k){       ///4

    int count_k = 0;

    for(int i = 0; i < length; i++){
        if(array_1[i] == num_k){
            count_k = count_k + 1;
        }
    }

    return count_k;
}


///Complejidad: O(length)
int function_3(int array_1[], int length, int num_k){       ///3

    for(int i = 0; i < length; i++){
        if(array_1[i] == num_k){
            return i;
        }
    }

}


///Complejidad: O(length - 1) => O(length)
bool function_2(int array_1[], int length){               ///2

    for(int i = 0; i < length - 1; i++){
        if(array_1[i] > array_1[i + 1]){
            return false;
        }
    }

    return true;
}


///Complejidad: O(length^2)
bool function_1(int array_1[], int length){                 ///1

    for(int i = 0; i < length; i++){
        for(int j = i + 1; j < length; j++){
            if(array_1[i] > array_1[j]){
                return false;
            }

        }
    }

    return true;
}
