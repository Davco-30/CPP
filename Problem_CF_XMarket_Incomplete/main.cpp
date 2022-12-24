#include <iostream>

using namespace std;
///A. Crossmarket - Codeforces

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int n, m;
        cin >> n >> m;

        n--;
        m--;
        cout << "n: " << n << "\nm: " << m << endl;
        int form = (n);
        cout << "form: " << form << endl;
        form += 2*(m);
        cout << "form: " << form << endl;
        form++;
        cout << "form: " << form << endl;

        cout << form << endl;
    }
    return 0;
}
