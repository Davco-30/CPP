#include <iostream>

using namespace std;
///Codeforces - A. Vanya and Fence

int main()
{
    int n, h;
    int sum = 0;
    cin >> n >> h;

    for(int i = 0; i < n; i++){
        int height;
        cin >> height;

        if(height > h){
            sum += 2;
            continue;
        }

        sum++;
    }

    cout << sum;

    return 0;
}
