#include <iostream>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;

    int num = (n/m);

    m *= num;

    cout << num << " " << (n-m);

    return 0;
}
