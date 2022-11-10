#include <iostream>

using namespace std;
///Team -Codeforces

int main()
{
    int n;
    cin >> n;

    int arr_1[3];
    int answers = 0;

    for(int i = 0; i < n; i++){
        int c = 0;
        cin >> arr_1[0] >> arr_1[1] >> arr_1[2];

        if(arr_1[0] == 1){
            c = c + 1;
        }

        if(arr_1[1] == 1){
            c = c + 1;
        }

        if(arr_1[2] == 1){
            c = c + 1;
        }

        if(c >= 2){
            answers = answers + 1;
        }
    }

    cout << answers;

    return 0;
}
