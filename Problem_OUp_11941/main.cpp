#include <iostream>
#include <bits/stdc++.h>

using namespace std;
///OmegaUp - 11941. Mapas

int main()
{
    int n;
    cin >> n;

    char matrix_1[n][n], matrix_2[n][n];

    for(int i = 0; i < n; i++){
        string row;
        cin >> row;

        for(int j = 0; j < row.length(); j++){
            matrix_1[i][j] = row[j];
        }
    }

    for(int i = 0; i < n; i++){
        string row;
        cin >> row;

        for(int j = 0; j < row.length(); j++){
            matrix_2[i][j] = row[j];
        }
    }

//    cout << "Matriz 1:\n";
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            cout << matrix_1[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "Matriz 2:\n";
//    for(int i = 0; i < n; i++){
//        for(int j = 0; j < n; j++){
//            cout << matrix_2[i][j] << " ";
//        }
//        cout << endl;
//    }

    ///Comparación.
    int flag = 0, attempts = 0;

    ///Caso 1
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix_1[i][j] != matrix_2[i][j]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 2
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(matrix_1[(n-1)-i][j] != matrix_2[j][i]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 3
    for(int i = n-1; i >= 0; i--){
        for(int j = n-1; j >= 0; j--){
            if(matrix_1[(n-1)-i][(n-1)-j] != matrix_2[i][j]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 4
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(matrix_1[i][(n-1)-j] != matrix_2[j][i]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 5
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(matrix_1[i][(n-1)-j] != matrix_2[i][j]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 6
    for(int i = n-1; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(matrix_1[(n-1)-i][(n-1)-j] != matrix_2[j][i]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 7
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if(matrix_1[(n-1)-i][j] != matrix_2[i][j]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    ///Caso 8
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(matrix_1[i][j] != matrix_2[j][i]){
                flag = 1;
                break;
            }
        }

        if(flag == 1){
            flag = 0;
            attempts++;
            break;
        }
    }

    if(attempts < 8){
        cout << "IGUALES";
    }

    else{
        cout << "DIFERENTES";
    }

    return 0;
}
