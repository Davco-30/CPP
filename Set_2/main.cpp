#include <iostream>
#include <set>

using namespace std;
///Leer n y n n�meros enteros distintos. Despu�s, leer�s n-1 n�meros distintos que forman parte de los primeros n n�meros.
///Encuentra el dato que hace falta en la segunda lista.

int main()
{
    set<int> set1;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){ /// n=5 => [1,2,3,6,8] => [1,3,2,6]
        int num;
        cin >> num;
        set1.insert(num);
    }

    for(int i = 0; i < (n-1); i++){
        int num;
        cin >> num;
        set1.erase(num);
    }

    cout << *set1.begin();
    return 0;
}
