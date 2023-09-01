#include <iostream>

using namespace std;

int main()
{
    ///Leer f y c. Leer 2 matrices de tamaño de f por c y crear la matriz de la suma e imprimirla
    int f, c;
    cin >> f >> c;

    int matrix_1[f][c], matrix_2[f][c];

    cout << "Matriz 1:\n";
    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            matrix_1[i][j] = rand() % 50 + 1;
            cout << matrix_1[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl;

    int matrix_result[f][c];

    cout << "Matriz 2:\n";
    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            matrix_2[i][j] = rand() % 50 + 1;
            cout << matrix_2[i][j] << " ";
        }

        cout << endl;
    }

    for(int i = 0; i < f; i++){
        for(int j = 0; j < c; j++){
            matrix_result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    cout << "\nResultado:\n";
    for(int i= 0; i < f; i++){
        for(int j = 0; j < c; j++){
            cout << matrix_result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
