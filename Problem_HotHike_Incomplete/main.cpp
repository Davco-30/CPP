#include <iostream>

using namespace std;
/// Hot Hike - Kattis

int main()
{
    int n;
    cin >> n;

    int list1[n];

    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        list1[i] = temp;
    }

    return 0;
}
