// Nombre: LUIS MARIO DURE NU�EZ //
// Ejercicio 5: Determinar si los n�meros est�n ordenados //
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

   cout << "Ingresa el primer numero: ";
    cin >> num1;
     cout << "Ingresa el primer numero: ";
    cin >> num2;
     cout << "Ingresa el primer numero: ";
    cin >> num3;
    if (num1 < num2 && num2 < num3) {
        cout << "Los numeros estan en orden ascendente." << endl;
    } else if (num1 > num2 && num2 > num3) {
        cout << "Los numeros estan en orden descendente." << endl;
    } else {
        cout << "Los numeros estan desordenados." << endl;
    }
    return 0;
}
