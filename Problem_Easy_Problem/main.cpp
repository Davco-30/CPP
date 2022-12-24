#include <iostream>

using namespace std;

///In Search of an Easy Problem - Codeforces

int main()
{
    int n;
    cin >> n;

    int results = 0;

    for(int i = 0; i < n; i++){
        int opinion;
        cin >> opinion;

        results = results + opinion;
    }

    if(results == 0){
        cout << "EASY";
    }

    else{
        cout << "HARD";
    }

    return 0;
}
