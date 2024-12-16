// Nombre: LUIS MARIO DURE NUÑEZ  //
// Ejercicio 1: Suma, resta, multiplicación y división //
#include <iostream>
using namespace std;
 // Entrada del progreso //
int main() {
    int num1, num2;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Suma: " << num1 + num2 << endl;
    cout << "Resta: " << num1 - num2 << endl;
    cout << "Multiplicacion: " << num1 * num2 << endl;
    if (num2 != 0) {
        cout << "Division: " << num1 / num2 << endl;
    } else {
        cout << "Division: No se puede dividir entre cero." << endl;
    }
    return 0;
}
