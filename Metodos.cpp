
#include <iostream>
using namespace std;

// Aqui calculamos la potencia del motor :D
double calcularPotencia(double voltaje, double corriente) {
    return voltaje * corriente;
}

// Calculamos las vueltas que da el motor por minuto
// Esta parte se me hizo un poquito dificil :(
double calcularRPM(double vueltas, double minutos) {
    return vueltas / minutos;
}

// Revisamos si el motor esta dentro de los limites
bool evaluarMotor(double potencia, double rpm) {
    return potencia <= 60 && rpm <= 1000;
}

// Mostramos los resultados para ver como funciona el motor
void mostrarResultados(double potencia, double rpm) {
    cout << "\n--- REPORTE DEL MOTOR ---" << endl;
    cout << "Potencia consumida: " << potencia << " watts" << endl;
    cout << "Velocidad del motor: " << rpm << " RPM" << endl;

    // Si cumple con las dos condiciones, funciona correctamente
    if (evaluarMotor(potencia, rpm)) {
        cout << "Estado: FUNCIONAMIENTO SEGURO :D" << endl;
    } else {
        cout << "Estado: FUERA DE LOS LIMITES :(" << endl;
    }
}

int main() {
    double voltaje, corriente, vueltas, minutos;
    double potencia, rpm;

    // Pedimos los datos del motor
    cout << "Ingrese el voltaje: ";
    cin >> voltaje;

    cout << "Ingrese la corriente: ";
    cin >> corriente;

    cout << "Ingrese las vueltas realizadas: ";
    cin >> vueltas;

    cout << "Ingrese el tiempo en minutos: ";
    cin >> minutos;

    // Revisamos que los datos tengan sentido
    if (minutos <= 0 || voltaje < 0 ||
        corriente < 0 || vueltas < 0) {
        cout << "Error: datos no validos." << endl;
        return 1;
    }

    // Guardamos los resultados de las operaciones
    potencia = calcularPotencia(voltaje, corriente);
    rpm = calcularRPM(vueltas, minutos);

    // Mandamos los resultados para que se impriman
    mostrarResultados(potencia, rpm);

    return 0;
}
