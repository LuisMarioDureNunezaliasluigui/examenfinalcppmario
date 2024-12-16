 // Nombre:LUIS MARIO DURE NUÑEZ //
// Ejercicio 19: Sistema de calificaciones //
#include <iostream>
#include <vector>
using namespace std;

// Función para calcular el promedio de un vector de calificaciones //
float calcularPromedio(const vector<int> &calificaciones) {
    int suma = 0;
    for (int calificacion : calificaciones) {
        suma += calificacion;
    }
    return static_cast<float>(suma) / calificaciones.size();
}

int main() {
    int numEstudiantes, numCalificaciones;

    cout << "Ingresa el numero de estudiantes: ";
    cin >> numEstudiantes;
    cout << "Ingresa el numero de calificaciones por estudiante: ";
    cin >> numCalificaciones;

    vector<vector<int>> calificaciones(numEstudiantes, vector<int>(numCalificaciones));
    vector<float> promedios(numEstudiantes);
    float mejorPromedio = 0.0;
    int estudianteMejorPromedio = 0;

    // Registrar calificaciones
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "Ingresa las calificaciones del estudiante " << i + 1 << ":" << endl;
        for (int j = 0; j < numCalificaciones; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> calificaciones[i][j];
        }
        // Calcular promedio
        promedios[i] = calcularPromedio(calificaciones[i]);
        if (promedios[i] > mejorPromedio) {
            mejorPromedio = promedios[i];
            estudianteMejorPromedio = i + 1;
        }
    }

    // Mostrar resultados //
    for (int i = 0; i < numEstudiantes; i++) {
        cout << "El promedio del estudiante " << i + 1 << " es: " << promedios[i] << endl;
    }
    cout << "El mejor promedio es del estudiante " << estudianteMejorPromedio << " con: " << mejorPromedio << endl;

    return 0;
}
