#include <iostream>

using namespace std;
///Codeforces- A. Insomnia cure

int main()
{
    int k,l,m,n,total;
    cin >> k >> l >> m >> n;
    cin >> total;

    int result = 0;

    result += (total/k)+(total/l)+(total/m)+(total/n);

    cout << result;

    if(result > total){
        cout << total;
    }

    return 0;
}
