// Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 16: Función que devuelve la suma de dos números //
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
