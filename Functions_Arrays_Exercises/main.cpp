#include <iostream>

using namespace std;

///1. Crear una función que reciba como parámetro un arreglo. Posteriormente, debe de retornar la longitud de dicho arreglo.

///2. Crear una función que reciba 2 parámetros. Primero, el arreglo y segundo, la logitud del arreglo. Tu función debe de imprimir el contenido del arreglo
///en una sola línea separado por espacios.

///3. Crear una función que reciba un arreglo y su longitud y retorne la suma de todos los elementos del arreglo.

///4. Crear una función que reciba un arreglo y su longitud y retorne el menor elemento el arreglo.

///5. Crear una función qur reciba un arreglo y su longitud y retorne el número que se repite en el arreglo (se garantiza que sólo un número se repite).

///6. Crear una función que retorne el único elemento que no se repite en el arreglo.

void suma_1(int n);
int array_length(int array_p[]); ///1
void function_array(int array_2[], int length); ///2
int function_array_sum(int array_3[], int length); ///3
int function_minor(int array_4[], int length);   ///4
int function_repeat(int array_5[], int length);  ///5
int function_single(int array_6[], int length);

int main()
{
    //suma_1(n);
    //cout << n;

    /*cout << sizeof(array_1) << "\n";
    cout << sizeof(array_1[0]) << "\n";
    cout << sizeof(array_1[4]) << "\n";*/

    ///1
    //cout << array_length(array_1) << "\n";
    //cout << sizeof(array_1);

    ///2
    /*
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    function_array(array_1, n);
    */

    ///3
    /*
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << function_array_sum(array_1, n);
    */

    ///4
    /*
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << function_minor(array_1, n);
    */

    ///5
    /*
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << function_repeat(array_1, n);
    */

    ///6
    /*
    int n;
    cin >> n;

    int array_1[n];

    for(int i = 0; i < n; i++){
        cin >> array_1[i];
    }

    cout << function_single(array_1, n);
    */

    return 0;
}

///6
///Complejidad: O(length^2)
int function_single(int array_6[], int length){
    int single_number;

    for(int i = 0; i < length; i++){
        int num_count = 0;
        int number = array_6[i];

        for(int j = 0; j < length; j++){
            if(array_6[i] == array_6[j]){
                num_count = num_count + 1;
            }
        }

        if(num_count == 1){
            single_number = number;
            return single_number;
        }
    }
}


///5
///Complejidad: O(length^2)
int function_repeat(int array_5[], int length){
    int repeated_number;

    for(int i = 0; i < length; i++){
        int number;

        for(int j = i + 1; j < length; j++){
            if(array_5[i] == array_5[j]){
                number = array_5[i];
                repeated_number = number;
            }
        }
    }

    return repeated_number;

}

///4
///Complejidad: O(length)
int function_minor(int array_4[], int length){
    int num_small = INT_MAX;

    for(int i = 0; i < length; i++){
        if(array_4[i] < num_small){
            num_small = array_4[i];
        }
    }

    return num_small;
}

///3
///Complejidad: O(length)
int function_array_sum(int array_3[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum = sum + array_3[i];
    }

    return sum;
}


///2
///Complejidad: O(length)
void function_array(int array_2[], int length){
    for(int i = 0; i < length; i++){
        cout << array_2[i] << " ";
    }
}

///1
int array_length(int array_p[]){
    return sizeof(array_p);
}

void suma_1(int n){
    n++;
    cout << n << "\n";
}
