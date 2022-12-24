#include <iostream>

using namespace std;
///Mensajería - OmegaUp

int main()
{
    int n, k, sum = 0;
    int p = -1;
    cin >> n >> k;

    int tell = n;

    for(int i = 0; i < n; i++){
        int price;
        cin >> price;

        if(price > p){
            p = price;
        }

        if(price > k){
            sum += k;
        }

        else{
            sum += price;
            tell--;
        }
    }

    if(tell == 0){
        sum -= (p-k);
    }

    cout << sum;

    return 0;
}
