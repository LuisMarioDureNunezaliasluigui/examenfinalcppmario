// Nombre: LUIS MARIO DURE NUÑEZ //
// Ejercicio 2: Área y circunferencia de un círculo //
#include <iostream>
using namespace std;

int main() {
    const float PI = 3.1416;
    float radio;
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;

    cout << "Area: " << PI * radio * radio << endl;
    cout << "Circunferencia: " << 2 * PI * radio << endl;
    return 0;
}
