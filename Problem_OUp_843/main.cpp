#include <iostream>

using namespace std;
///OmegaUp - 843. L-OMI2010-

int main()
{
    int m, n;
    cin >> m >> n;

    int board[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> board[i][j];
        }
    }

    int k;
    cin >> k;

    int v_count = 0, h_count = 0;

    for(int i = 0; i < k; i++){
        char spin;
        cin >> spin;

        if(spin == 'H'){
            h_count++;
        }

        else if(spin == 'V'){
            v_count++;
        }
    }

    if(v_count % 2 == 0 && h_count % 2 == 0){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }

    else if(v_count % 2 == 0 && h_count % 2 != 0){
        for(int i = 0; i < m; i++){
            for(int j = n-1; j >= 0; j--){
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }

    else if(v_count % 2 != 0 && h_count % 2 == 0){
        for(int i = m-1; i >= 0; i--){
            for(int j = 0; j < n; j++){
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }

    else{
        for(int i = m-1; i >= 0; i--){
            for(int j = n-1; j >= 0; j--){
                cout << board[i][j] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
