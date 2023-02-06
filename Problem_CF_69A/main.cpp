#include <iostream>

using namespace std;
///Codeforces - A. Young Physicist

int main()
{
    int n;
    cin >> n;

    int sumx = 0, sumy = 0, sumz = 0;

    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;

        sumx += x;
        sumy += y;
        sumz += z;
    }

    if(sumx == 0 && sumy == 0 && sumz == 0){
        cout << "YES";
    }

    else{
        cout << "NO";
    }

    return 0;
}
