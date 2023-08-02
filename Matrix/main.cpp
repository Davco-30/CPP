#include <iostream>

using namespace std;

int main()
{
    ///Leer f y c. Leer 2 matrices de tama;o de f por c y crear la matriz de la suma e imprimirla
    int f, c;
    cin >> f >> c;

    int matrix_1[f][c], matrix_2[f][c];

    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cin >> matrix_1[i][j];
        }
    }

    int matrix_result[f][c];

    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cin >> matrix_2[i][j];
        }
    }

    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            matrix_result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    cout << "Resultado:\n";
    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << matrix_result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
