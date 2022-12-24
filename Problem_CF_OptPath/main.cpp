#include <iostream>

using namespace std;
///A. Optimal Path - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        long long int n, m;
        cin >> n >> m;

        long long int m2 = m-1;

        long long int result = ( ((m2)*(m2)) + (m2) ) / (2);
        result += (m)*( ((n*n)+ n)  / (2) );
        cout << result << endl;
    }
    return 0;
}
