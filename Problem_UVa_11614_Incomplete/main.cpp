#include <iostream>
#include <math.h>

typedef long long int lli;

using namespace std;
///11614 - UVa

int main()
{
    lli n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int num;
        cin >> num;

        cout << "num: " << num << endl;

        int num2 = sqrt(num);
        cout << "num2: " << num2 << endl;

        if( (num2*num2) == num){
            cout << num2 << endl;
        }

        else if( (num2*num2) != num){
            cout << num2+1 << endl;
        }
    }
    return 0;
}
