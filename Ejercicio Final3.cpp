// Nombre: LUIS MARIO DURE NUÑEZ //
// Ejercicio 3: Promedio y diferencia entre mayor y menor //
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int num1, num2, num3;
    cout << "Ingresa el primer numero: ";
    cin >> num1;
     cout << "Ingresa el primer numero: ";
    cin >> num2;
     cout << "Ingresa el primer numero: ";
    cin >> num3;

    float promedio = (num1 + num2 + num3) / 3.0;
    int mayor = max({num1, num2, num3});
    int menor = min({num1, num2, num3});

    cout << "Promedio: " << promedio << endl;
    cout << "Diferencia entre el mayor y menor: " << mayor - menor << endl;
    return 0;
}
