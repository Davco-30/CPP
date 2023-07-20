#include <iostream>

using namespace std;
///Codeforces - A. Presents

int main()
{
    int n;
    cin >> n;

    int friends[n];
    int order[n];

    for(int i = 1; i <= n; i++){
        cin >> friends[i];
        order[friends[i]-1] = i;
    }

    for(int i = 0; i < n; i++){
        cout << order[i] << " ";
    }

    return 0;
}
