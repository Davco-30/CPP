#include <iostream>
typedef long long int ll;

using namespace std;
///Xbox Live Points - OmegaUp
///Algoritmo KADANE

int main()
{
    ll n, total = 0;
    cin >> n;

    ll list1[n];

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;

        list1[i] = m;
    }

    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum += list1[i];
        if(sum < 0){
            sum = 0;
        }

        else if(sum > total){
            total = sum;
        }
    }

    cout << total;

    return 0;
}
