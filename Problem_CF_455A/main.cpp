#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
    int n;
    cin >> n;

    lli list_num[n];
    lli amount_num[100001] = {0};

    for(lli i = 0; i < n; i++){
        cin >> list_num[i];

        amount_num[list_num[i]]++;
    }

    lli size_list_amount = (sizeof(amount_num)/sizeof(amount_num[0]))-1;
    lli max_prev = 0;

    for(int i = 2; i < 100001; i++){
        ///{0,5,2,2,5}
        /// 0 1 2 3 4
        /// 0,5,5,11,25

        ///Construir un arrreglo que tenga en su indice el valor mas grande entre el intervalo 1 hasta el intervalo k
        max_prev = amount_num[i-2];

        /*cout << "Max_prev: " << max_prev << "\nnum[i]: " << amount_num[i] << "\nnum[i-1]: " << amount_num[i-1] << "\n";
        cout << "Mult_1: " << (amount_num[i]*i) + max_prev << "\t Mult_2: " << amount_num[i-1] << "\n" << endl;*/

        if( ( (amount_num[i]*i) + max_prev) >  amount_num[i-1]){
            amount_num[i] = (amount_num[i]*i) + max_prev;
        }

        else{
            amount_num[i] = amount_num[i-1];
        }
    }

    cout << amount_num[size_list_amount];

    return 0;
}
