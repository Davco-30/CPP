#include <iostream>

using namespace std;
///License to Launch - Kattis

int main()
{
    int n, m = 0, tiny = 1000000001;
    int diff = 1, prev = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int num;
        cin >> num;

        if(num < tiny){
            tiny = num;
            m = i;
        }

        if(num == prev){
            diff++;
        }

        prev = num;
    }

    if(diff == n){
        cout << 0;
    }

    else{
        cout << m;
    }

    return 0;
}
