#include <iostream>

using namespace std;
///Hulk - Codeforces

int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout << "I hate";
        }

        if(i % 2 == 1){
            cout << "I love";
        }

        if(i == n - 1){
            cout << " it";
        }

        else{
            cout << " that ";
        }
    }

    return 0;
}
