 // Nombre:LUIS MARIO DURE NU�EZ //
// Ejercicio 11: Suma de n�meros hasta ingresar un negativo //
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
