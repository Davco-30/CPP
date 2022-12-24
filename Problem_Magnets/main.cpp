#include <iostream>

using namespace std;
///Magnets - Codeforces

int main()
{
    int n;
    cin >> n;

    int groups = 0;
    int magnets[n+1];

    for(int i = 1; i <= n; i++){
        int piece;
        cin >> piece;

        magnets[i] = piece;

        if(magnets[i] != magnets[i-1]){
            groups = groups + 1;
        }

    }

    cout << groups;

    return 0;
}
