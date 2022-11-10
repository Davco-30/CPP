#include <iostream>

using namespace std;
///Arrangement - Kattis

int main()
{
    string gp = "*";
    int n, m;
    cin >> n >> m;

    int g = (m/n);
    int h = (m%n);

    if((g*n) <= (m)){
        n -= h;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < g; j++){
                cout << "*";
            }
            cout << "\n";
        }

        for(int i = 0; i < h; i++){
            for(int j = 0; j < (g+1); j++){
                cout << "*";
            }
            cout << "\n";
        }
    }

    else if((g*n) > (m)){
        n -= h;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < g; j++){
                cout << "*";
            }
            cout << "\n";
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < (g-1); j++){
                cout << "*";
            }
            cout << "\n";
        }

    }

    return 0;
}
