#include <iostream>

using namespace std;
///Codeforces - B. Drinks

int main()
{
    int n;
    float res, sum, last, p;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin>>p;
        res = p/100;
        sum += res;

        /*cout << "RES: " << res << endl;
        cout << "SUM: " << sum << endl;*/
    }

    last = sum/n;
    last = last*100;

    cout<<last<<endl;

    return 0;
}
