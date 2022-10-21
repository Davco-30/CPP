#include <iostream>

using namespace std;
///Colourblindness - Codeforces

int main()
{
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        int n;
        cin >> n;

        string grid_1, grid_2;
        cin >> grid_1 >> grid_2;

        for(int i = 0; i < n; i++){
            if(grid_1[i] == 'R'){
                if(grid_2[i] == 'G' || grid_2[i] == 'B'){
                    cout << "NO" << "\n";
                    break;
                }
            }

            if(grid_2[i] == 'R'){
                if(grid_1[i] == 'G' || grid_1[i] == 'B'){
                    cout << "NO" << "\n";
                    break;
                }
            }

            else{
                cout << "YES" << "\n";
                break;
            }
        }
    }
    return 0;
}
