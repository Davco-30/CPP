#include <iostream>

using namespace std;
///OmegaUp - 3692. Chicos Mosby

int grid_check(int n, int m, int result);

int main()
{
    int n, m;
    cin >> n >> m;

    cout << grid_check(n, m , 0);

    return 0;
}

int grid_check(int n, int m, int result){
    if(n == 1 || m == 1){
        return result + (n*m);
    }

    else if(n > m){
        return grid_check(n - (m*(n/m)), m, result + (n/m));
    }

    else if(n < m){
        return grid_check(n, m - (n*(m/n)), result + (m/n));
    }

    else if(n == m){
        return result+1;
    }
}
