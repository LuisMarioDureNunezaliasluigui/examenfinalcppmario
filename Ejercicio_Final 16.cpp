// Nombre:LUIS MARIO DURE NU�EZ //
// Ejercicio 16: Funci�n que devuelve la suma de dos n�meros //
#include <iostream>
using namespace std;

int suma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Ingresa dos numeros: ";
    cin >> num1 >> num2;

    cout << "La suma es: " << suma(num1, num2) << endl;
    return 0;
}
