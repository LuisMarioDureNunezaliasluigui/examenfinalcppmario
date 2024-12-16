// Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 17: Intercambiar valores de dos variables (por referencia) //
#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;
    cout << "Ingresa dos numeros: ";
    cin >> num1 >> num2;

    cout << "Antes del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;
    intercambiar(num1, num2);
    cout << "Despues del intercambio: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
