#include <iostream>

using namespace std;
///Leerás n números y después un número k y debes de indicar el número mayor o igual a k más pequeño del arreglo.
///El arreglo viene ordenado

int main()
{
    int n, k;
    cin >> n;

    int list1[n];

    for(int i = 0; i < n; i++){
        cin >> list1[i];
    }

    cin >> k;

    int start = 0;
    int fin = n-1;

    while((start + 1) < fin){
        int mid = (start + fin)/2;

        if(list1[mid] > k){
            fin = mid;
        }

        else{
            start = mid;
        }
    }

    if(start < k){
        cout << list1[fin];
    }

    else{
        cout << list1[start];
    }

    return 0;
}
