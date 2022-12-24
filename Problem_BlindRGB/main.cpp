#include <iostream>

using namespace std;
///Colourblindness - Codeforces

int main()
{
    int t; ///No. of cases
    cin >> t;

    for(int i = 0; i < t; i++){
        ///Case
        int n;      ///No. of columns
        cin >> n;

        int m = n;

        string grid_1, grid_2;
        cin >> grid_1 >> grid_2;

        int cases = 0;

        for(int i = 0; i < n; i++){
            if(grid_1[i] == 'R'){
                if(grid_2[i] == 'G' || grid_2[i] == 'B'){
                    cout << "NO" << "\n";
                    cases++;
                    break;
                }
            }

            else if(grid_1[i] == 'G' || grid_1[i] == 'B'){
                if(grid_2[i] == 'R'){
                    cout << "NO" << "\n";
                    cases++;
                    break;
                }
            }
        }

        if(cases == 0){
            cout << "YES" << "\n";
        }

    }
    return 0;
}
