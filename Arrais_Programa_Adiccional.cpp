
#include <iostream>
using namespace std;

int main() {
    // Variables para guardar las temperaturas
    float celsius, fahrenheit;

    // Vamos a convertir la temperatura, o a congelarnos en el intento :v
    cout << "CONVERSOR DE TEMPERATURA" << endl;
    cout << "Ingresa los grados Celsius: ";
    cin >> celsius;

    // La formula hace todo el trabajo pesado
    fahrenheit = (celsius * 9 / 5) + 32;

    // Mostramos el resultado para ver cuanto nos dio
    cout << "Temperatura en Fahrenheit: "
         << fahrenheit << endl;

    return 0;
}
