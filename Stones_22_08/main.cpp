#include <iostream>

using namespace std;
///Stones on the Table - Codeforces

int main()
{
    int n; ///Number of stones on the
    string row; ///R,G,B

    cin >> n;
    cin >> row;

    int stones = 0;

    for(int i = 0; i < n; i++){
        if(row[i] == row[i+1]){
            stones = stones + 1;
        }
    }

    cout << stones;

    return 0;
}
