#include <iostream>

using namespace std;
///Codeforces - Array Coloring

int main()
{
    int m;
    cin >> m;

    for(int i = 0 ; i < m; i++){
        int n;
        cin >> n;

        int sum_arr = 0;

        for(int j = 0; j < n; j++){
            int x;
            cin >> x;

            sum_arr += x;
        }

        if(sum_arr % 2 != 0){
            cout << "NO" << endl;
        }

        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
