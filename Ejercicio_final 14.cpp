 // Nombre: LUIS MARIO DURE NUÑEZ //
// Ejercicio 14: Llenar una matriz 2x2 y calcular la suma de sus elementos //
#include <iostream>
using namespace std;

int main() {
    int matriz[2][2], suma = 0;

    cout << "Ingresa los elementos de una matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
            suma += matriz[i][j];
        }
    }

    cout << "La suma de los elementos de la matriz es: " << suma << endl;
    return 0;
}
