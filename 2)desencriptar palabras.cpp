#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Prototipo de la función //
vector<string> desencriptarPalabra(string palabraEncriptada);

int main() {
    cout << "DESENCRIPTADOR DE PALABRAS" << endl;
    string palabraEncriptada;

    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    vector<string> posiblesPalabras = desencriptarPalabra(palabraEncriptada);

    cout << "Las posibles palabras originales son:" << endl;
    for (int i = 0; i < posiblesPalabras.size(); i++) {
        cout << "Clave " << i + 1 << ": " << posiblesPalabras[i] << endl;
    }

    return 0;
}

// Implementación de la función //
vector<string> desencriptarPalabra(string palabraEncriptada) {
    vector<string> posiblesPalabras;
    for (int clave = 1; clave <= 5; clave++) {
        string palabraDesencriptada = "";
        for (char c : palabraEncriptada) {
            palabraDesencriptada += char(c - clave);
        }
        posiblesPalabras.push_back(palabraDesencriptada);
    }
    return posiblesPalabras;
}
