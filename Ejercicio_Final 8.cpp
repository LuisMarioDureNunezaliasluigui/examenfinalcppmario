 // Nombre:LUIS MARIO DURE NU�EZ //
// Ejercicio 8: D�a de la semana seg�n n�mero //
#include <iostream>
using namespace std;

int main() {
    int dia;
    cout << "Ingresa un numero del 1 al 7: ";
    cin >> dia;

    switch (dia) {
        case 1: cout << "Lunes" << endl; break;
        case 2: cout << "Martes" << endl; break;
        case 3: cout << "Miercoles" << endl; break;
        case 4: cout << "Jueves" << endl; break;
        case 5: cout << "Viernes" << endl; break;
        case 6: cout << "Sabado" << endl; break;
        case 7: cout << "Domingo" << endl; break;
        default: cout << "Numero invalido." << endl; break;
    }
    return 0;
}
