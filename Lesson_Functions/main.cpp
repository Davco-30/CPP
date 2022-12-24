#include <iostream>
#include <math.h>

using namespace std;

///Funciones

///Hacer una nueva función
/// Tipo Nombre(Tipo de dato _ Variable == Parámetros){ Procedimiento }

///Estas declaraciones permiten que main() pueda estar presente en el principio.
int suma(int a, int b); ///Esta función declara al programa: "Se encontrará una función ENTERA llamada 'suma' con parámetros enteros de a hasta b"
int resta(int a, int b); ///Esta función declara al programa: "Se encontrará una función ENTERA llamada 'resta' con parámetros enteros de a hasta b"
int mult(int a, int b);
float divide(float a, float b); ///Esta función declara al programa: "Se encontrará una función FLOTANTE llamada 'divide' con parámetros flotantes de a hasta b"
float form_g(float a, float b, float c); ///Esta función declara al programa: "Se encontrará una función FLOTANTE llamada 'divide' con parámetros flotantes de a hasta c"
float form_g_2(float a, float b, float c);


int main(){  ///Cerebro del programa
    cout << suma(8,7) << endl;
    cout << resta(8,7) << endl;
    cout << mult(8,7) << endl;
    cout << divide(8,7) << endl;
    cout << form_g(1, 0, -1) << endl;
    cout << form_g_2(1, 0, -1) << endl;
    return 0;
}

int f(int x){  ///Nueva función
    return x * x;
}

int suma(int a, int b){
    return a + b; ///return es la clave para regresar la operación que corresponde a la función 'suma'
}

int resta(int a, int b){
    return a - b;
}

int mult(int a, int b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}

float form_g(float a, float b, float c){
    return (-b + sqrt( (b * b) - (4*a*c)) ) / (2 * a);
}

float form_g_2(float a, float b, float c){
    float result = (-b - sqrt( (b * b) - (4*a*c)) ) / (2 * a);
    return result;
}

