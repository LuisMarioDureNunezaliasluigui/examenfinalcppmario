 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 15: Multiplicación de dos matrices 2x2 //
#include <iostream>
using namespace std;

int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2] = {{0, 0}, {0, 0}};

    cout << "Ingresa los elementos de la primera matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingresa los elementos de la segunda matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }


    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
