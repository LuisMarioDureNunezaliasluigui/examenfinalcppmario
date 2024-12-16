
 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 9: Menú de operaciones matemáticas //
#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;

    cout << "Menu de operaciones:\n1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n";
    cout << "Elige una opcion: ";
    cin >> opcion;

    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    switch (opcion) {
        case 1: cout << "Resultado (Suma): " << num1 + num2 << endl; break;
        case 2: cout << "Resultado (Resta): " << num1 - num2 << endl; break;
        case 3: cout << "Resultado (Multiplicacion): " << num1 * num2 << endl; break;
        case 4:
            if (num2 != 0) {
                cout << "Resultado (Division): " << num1 / num2 << endl;
            } else {
                cout << "No se puede dividir entre cero." << endl;
            }
            break;
        default: cout << "Opcion invalida." << endl; break;
    }
    return 0;
}
