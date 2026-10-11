
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Aqui guardamos los datos, tampoco vamos a contar los sensores con los dedos
    int cantidad;
    string nombres[10];
    float mediciones[10];

    // Primero hay que saber cuantos sensores vamos a revisar
    cout << "MONITOREO DE SENSORES" << endl;
    cout << "Cantidad de sensores (maximo 10): ";
    cin >> cantidad;

    // No podemos meter 20 sensores si solo tenemos espacio para 10 JAJA
    if (cantidad < 1 || cantidad > 10) {
        cout << "Cantidad no valida. Debe ser entre 1 y 10." << endl;
        return 0;
    }

    // Limpiamos el salto de linea para que no haga cosas raras
    cin.ignore();

    // Vamos registrando cada sensor, uno por uno
    for (int i = 0; i < cantidad; i++) {
        cout << "\nNombre del sensor " << i + 1 << ": ";
        getline(cin, nombres[i]);

        cout << "Valor registrado: ";
        cin >> mediciones[i];
        cin.ignore();
    }

    // Hora de ver si todo esta bien o ya valio xD
    cout << "\n--- RESULTADOS DEL MONITOREO ---" << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << "\nSensor: " << nombres[i] << endl;
        cout << "Medicion: " << mediciones[i] << endl;

        // Si es menor de 50, el sensor anda tranquilo
        if (mediciones[i] < 50) {
            cout << "Estado: Normal" << endl;
        // De 50 a 80 hay que echarle un ojo
        } else if (mediciones[i] <= 80) {
            cout << "Estado: Requiere supervision" << endl;
        // Si pasa de 80, tenemos problemas
        } else {
            cout << "Estado: Critico" << endl;
        }
    }

    return 0;
}
