 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 12: Menú de cálculo con repetición //
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opcion;
    double numero;

    do {
        cout << "Menu:\n1. Calcular el cuadrado de un numero\n2. Calcular el cubo de un numero\n3. Salir\n";
        cout << "Elige una opcion: ";
        cin >> opcion;

        if (opcion == 1 || opcion == 2) {
            cout << "Ingresa un numero: ";
            cin >> numero;
        }

        switch (opcion) {
            case 1: cout << "El cuadrado de " << numero << " es: " << pow(numero, 2) << endl; break;
            case 2: cout << "El cubo de " << numero << " es: " << pow(numero, 3) << endl; break;
            case 3: cout << "Saliendo del programa." << endl; break;
            default: cout << "Opcion invalida." << endl; break;
        }
    } while (opcion != 3);

    return 0;
}
