#include <iostream>

using namespace std;

void f(int n);
int g(int n);
int h(int n);
///Función de Fibonacci que utiliza recursión.
int Fibo(int n);
///Fibo(n) = Fibo(n-1)+Fibo(n-2) - n= 5
///Secuencia: 1 1 2 3 5 8 13 21

int main()
{
    f(2);
    cout << "\n" << g(3);
    cout << "\n" << h(5);
    cout << "\n" << Fibo(7);
    return 0;
}

int Fibo(int n){
    if(n == 2 || n == 1){
        return 1;
    }

    int num = Fibo(n-1)+Fibo(n-2);
    return num;

}

int h(int n){
    if(n == 0){
        return 1;
    }

    int factorial = n*h(n-1); ///120
    return factorial;
}

int g(int n){
    if(n == 0){
        return 0;
    }

    int sum = n+g(n-1); ///return 6
    return sum;
}

void f(int n){
    if(n > 0){
        //cout << n << " ";
        f(n-1); ///f(2)
        cout << n << " ";
    }
}
