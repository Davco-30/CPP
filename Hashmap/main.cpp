#include <iostream>
#include <map>

using namespace std;
///Se te dar�n n n�meros menores o iguales a 1000. Debes de indicar cu�l es el n�mero que apareci� m�s veces.
///Se te dar�n n n�meros menores o iguales a 10^9. Debes de indicar cu�l es el n�mero que apareci� m�s veces.


int main()
{
/*
    map<int,int> hashmap;

    hashmap[1000000000] = 465741384;
    cout << hashmap[1000000000] << endl;
    cout << hashmap.size() << endl;

    hashmap[1] +=1;
    cout << hashmap[1];

*/

    int n;
    cin >> n;

    string arr[n];
    map<string,int> bucket;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        bucket[arr[i]] += 1;
    }

    string num_most;
    int times = 0;

    for(int i = 0; i < n; i++){
        if(bucket[arr[i]] > times){
            times = bucket[arr[i]];
            num_most = arr[i];
        }
    }

    cout << num_most;

    return 0;
}
