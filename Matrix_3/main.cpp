#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;

    int matrix[rows][columns];

    for(int i= 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = j+1;
        }
    }

    cout << "Matriz Original:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    cout << "Rotación aplicada 1:" << endl;
    for(int i = 0; i < columns; i++){
        for(int j = rows-1; j >= 0; j--){
            cout << matrix[j][i] << " ";
        }

        cout << endl;
    }

    cout << "Rotación aplicada 2:" << endl;
    int rows_2 = columns;
    int columns_2 = rows;

    int matrix_2[rows_2][columns_2];

    for(int i = 0; i < rows_2; i++){
        for(int j = 0; j < columns_2; j++){
            matrix_2[i][j] = matrix[columns_2-(j+1)][i];
        }
    }

    for(int i = 0; i < rows_2; i++){
        for(int j = 0; j < columns_2; j++){
            cout << matrix_2[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
