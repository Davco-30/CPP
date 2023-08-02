#include <iostream>

using namespace std;

int main()
{
    ///Identificar la representacion de los valores de una matriz
    cout << "1." << endl;
    int rows, columns;
    cin >> rows >> columns;

    int matrix[rows][columns];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            matrix[i][j] = (j+1)*i;
        }
    }

    for(int i = 0; i < rows; i++){
        cout << "Row " << i << ": ";

        for(int j = 0; j < columns; j++){
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }

    ///Leer valor de filas y columnas (f,c). Crea una matriz con dichos valores y genera una matriz identidad.
    cout << "\t2." << endl;
    int f, c;
    cin >> f >> c;

    int matrix_1[f][c];

    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            if(i == j){
                matrix_1[i][j] = 1;
            }

            else{
                matrix_1[i][j] = 0;
            }

        }
    }

    cout << "Resultado:\n";
    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << matrix_1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
