// Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 13: Almacenar números en un vector e imprimirlos en orden inverso //
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros(5);

    cout << "Ingresa 5 numeros: ";
    for (int i = 0; i < 5; i++) {
        cin >> numeros[i];
    }

    cout << "Numeros en orden inverso: ";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
