 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 11: Suma de números hasta ingresar un negativo //
#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0;

    do {
        cout << "Ingresa un numero (negativo para terminar): ";
        cin >> numero;
        if (numero >= 0) {
            suma += numero;
        }
    } while (numero >= 0);

    cout << "La suma de los numeros ingresados es: " << suma << endl;
    return 0;
}
