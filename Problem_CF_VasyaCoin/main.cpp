#include <iostream>

using namespace std;
///A. Vasya and Coins . Codeforces

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        int sum = (a + (b*2)) + 1;

        if(a == 0){
            sum = 1;
        }

        cout << sum << endl;
    }
    return 0;
}
