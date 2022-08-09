#include <iostream>

using namespace std;

int main()
{
    int t; ///Number of cases;
    cin >> t;

    ///Complejidad: O(10000*2000000000)
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        int solutions = (n - 1)/(2);
        cout << solutions << "\n";

    }

    return 0;
}
