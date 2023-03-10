#include <iostream>

using namespace std;
///

int main()
{
    int n;
    cin >> n;

    int list_1[n];
    int common = -1, diff = -1, times = 0;
    int num_common = 0;

    for(int i = 0; i < n; i++){
        cin >> list_1[i];

        if(common == -1){
            common = i+1;
            num_common = list_1[i];
        }

        if(list_1[i] != num_common){
            times++;
            diff = i+1;
        }
    }

    if(times > 1){
        cout << common;
    }

    else if(times == 1){
        cout << diff;
    }

    return 0;
}
