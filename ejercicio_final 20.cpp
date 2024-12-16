// Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 20: Sistema de inventario //
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estructura para representar un producto //
struct Producto {
    string nombre;
    int cantidad;
};

// Función para mostrar el inventario //
void mostrarInventario(const vector<Producto> &inventario) {
    cout << "\nInventario actual:" << endl;
    for (size_t i = 0; i < inventario.size(); i++) {
        cout << i + 1 << ". " << inventario[i].nombre << " - Cantidad: " << inventario[i].cantidad << endl;
    }
}

int main() {
    vector<Producto> inventario;
    int opcion;

    do {
        cout << "\nMenu de Inventario:" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Actualizar cantidad" << endl;
        cout << "3. Mostrar inventario" << endl;
        cout << "4. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                Producto nuevoProducto;
                cout << "Ingresa el nombre del producto: ";
                cin.ignore(); // Limpiar el buffer
                getline(cin, nuevoProducto.nombre);
                cout << "Ingresa la cantidad inicial: ";
                cin >> nuevoProducto.cantidad;
                inventario.push_back(nuevoProducto);
                cout << "Producto agregado con exito." << endl;
                break;
            }
            case 2: {
                int indice, nuevaCantidad;
                mostrarInventario(inventario);
                cout << "Ingresa el numero del producto a actualizar: ";
                cin >> indice;
                if (indice > 0 && indice <= static_cast<int>(inventario.size())) {
                    cout << "Ingresa la nueva cantidad: ";
                    cin >> nuevaCantidad;
                    inventario[indice - 1].cantidad = nuevaCantidad;
                    cout << "Cantidad actualizada con exito." << endl;
                } else {
                    cout << "Numero de producto invalido." << endl;
                }
                break;
            }
            case 3:
                mostrarInventario(inventario);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción invalida. Intenta de nuevo." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}



