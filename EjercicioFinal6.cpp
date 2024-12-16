 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 6: Verificar si los números son mayores que un número de referencia //
#include <iostream>
using namespace std;

int main() {
    int referencia, num1, num2, num3, num4, num5;
    cout << "Ingresa un numero de referencia: ";
    cin >> referencia;
       cout << "Ingresa el primer numero: ";
    cin >> num1;
     cout << "Ingresa el segundo numero: ";
    cin >> num2;
     cout << "Ingresa el tercero numero: ";
    cin >> num3;
     cout << "Ingresa el cuarto numero: ";
    cin >> num4;
       cout << "Ingresa el quinto numero: ";
    cin >> num5;

    if (num1 > referencia && num2 > referencia && num3 > referencia && num4 > referencia && num5 > referencia) {
        cout << "Todos los numeros son mayores que " << referencia << "." << endl;
    } else {
        cout << "No todos los numeros son mayores que " << referencia << "." << endl;
    }
    return 0;
}
