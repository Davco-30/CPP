#include <iostream>

using namespace std;
///OmegaUp - 7285.

int main()
{
    int n, m;
    cin >> n;

    int list_num[n];
    int sum_num[n];

    for(int i = 0; i < n; i++){
        cin >> list_num[i];

        if(i == 0){
            sum_num[i] = list_num[i];
        }

        else{
            sum_num[i] = list_num[i] + sum_num[i-1];
        }
    }

    cin >> m;

    for(int j = 0; j < m; j++){
        int i, u;
        cin >> i >> u;

        ///Solución 2.
        if(i == 0){
            cout << sum_num[u] << endl;
        }

        else{
            cout << sum_num[u] - sum_num[i-1] << endl;
        }

        ///Solución 1.
        /*int result = 0;

        for(int k = i; k <= u; k++){
            result += list_num[k];
        }

        cout << result << endl;*/
    }

    return 0;
}
