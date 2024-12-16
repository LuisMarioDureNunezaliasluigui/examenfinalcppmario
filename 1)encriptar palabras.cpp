#include <iostream>
#include <string>
using namespace std;

// Prototipo de la función //
string encriptarPalabra(string palabra, int clave);

int main() {
    cout << "ENCRIPTADOR DE PALABRAS" << endl;
    string palabra;
    int clave;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    do {
        cout << "Ingrese un numero del 1 al 5 como clave: ";
        cin >> clave;
        if (clave < 1 || clave > 5) {
            cout << "Por favor, ingrese un numero valido entre 1 y 5." << endl;
        }
    } while (clave < 1 || clave > 5);

    string palabraEncriptada = encriptarPalabra(palabra, clave);
    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}

// Implementación de la función //
string encriptarPalabra(string palabra, int clave) {
    string palabraEncriptada = "";
    for (char c : palabra) {
        palabraEncriptada += char(c + clave);
    }
    return palabraEncriptada;
}
