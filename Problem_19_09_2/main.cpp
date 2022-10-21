#include <iostream>

using namespace std;
///Tram - Codeforces

int main()
{
    int n;
    int num_max = INT_MIN;
    int capacity = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a, b; ///Exit and Enter
        cin >> a >> b;

        capacity -= a;
        capacity += b;

        if(capacity > num_max){
            num_max = capacity;
        }
        //cout << "Capacidad: " << capacity << "\n";
    }

    cout << num_max;

    return 0;
}
