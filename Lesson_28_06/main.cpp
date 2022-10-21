#include <iostream>

using namespace std;

/// 1.Crear una función que lea un entero n que representaría el tamaño de un arreglo(no hay que crear el arreglo) e imprima
/// la cantidad de bits, bytes, KB, MB, GB, TB que utiliza dicha función

void function_1(float int_length);

int main()
{
    cout << "Introduzca un número." << endl;

    float n;
    cin >> n;

    function_1(n);
    return 0;
}

void function_1(float int_length){
    float size_B = int_length * 4;
    float size_bits = int_length * 32;
    float size_KB = size_B / 1024;
    float size_MB = size_KB / 1024;
    float size_GB = size_MB /1024;
    float size_TB = size_GB / 1024;

    cout << size_bits << "\n" <<  size_B << "\n" << size_KB << "\n" << size_MB << "\n" << size_GB << "\n" << size_TB;
}
