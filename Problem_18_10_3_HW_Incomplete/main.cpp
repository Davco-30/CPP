#include <iostream>

using namespace std;
///11614 - UVa

int main()
{
    int n;
    cin >> n;

    int rows = 0;

    for(int i = 1; i <= n; i++){
        int num = i

        if(n > num){
            n -= num;
            rows++;
        }

        else{
            break;
        }
    }
    return 0;
}
