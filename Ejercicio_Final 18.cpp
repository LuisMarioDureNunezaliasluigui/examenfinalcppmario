// Nombre: LUIS MARIO DURE NUÑEZ //
// Ejercicio 18: Función para calcular el mayor de tres números (por valor y referencia) //
#include <iostream>
using namespace std;

void calcularMayor(int a, int b, int c, int &mayor) {
    mayor = max(a, max(b, c));
}

int main() {
    int num1, num2, num3, mayor;
    cout << "Ingresa tres numeros: ";
    cin >> num1 >> num2 >> num3;

    calcularMayor(num1, num2, num3, mayor);
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
