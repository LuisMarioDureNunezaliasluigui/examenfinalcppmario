 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 7: Determinar si un número es positivo, negativo o cero
#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }
    return 0;
}
