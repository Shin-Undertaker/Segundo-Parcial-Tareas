
#include <iostream>
using namespace std;

// Sumamos las tres calificaciones y las dividimos entre 3
double calcularPromedio(double c1, double c2, double c3) {
    return (c1 + c2 + c3) / 3;
}

// Revisamos si el promedio alcanza para aprobar
bool evaluarAlumno(double promedio) {
    return promedio >= 70;
}

// Mostramos el promedio y si aprobo o no
void mostrarResultados(double promedio) {
    cout << "\n--- REPORTE DEL ALUMNO ---" << endl;
    cout << "Promedio: " << promedio << endl;

    // Si tiene 70 o mas, ya la libro :D
    if (evaluarAlumno(promedio)) {
        cout << "Estado: APROBADO :D" << endl;
    } else {
        cout << "Estado: REPROBADO :(" << endl;
    }
}

int main() {
    double c1, c2, c3, promedio;

    // Pedimos las calificaciones
    cout << "Ingrese la primera calificacion: ";
    cin >> c1;

    cout << "Ingrese la segunda calificacion: ";
    cin >> c2;

    cout << "Ingrese la tercera calificacion: ";
    cin >> c3;

    // Comprobamos que las calificaciones esten entre 0 y 100
    if (c1 < 0 || c1 > 100 ||
        c2 < 0 || c2 > 100 ||
        c3 < 0 || c3 > 100) {
        cout << "Error: calificaciones invalidas." << endl;
        return 1;
    }

    // Calculamos el promedio y mostramos los resultados
    promedio = calcularPromedio(c1, c2, c3);
    mostrarResultados(promedio);

    return 0;
}
