
# Calculamos la potencia multiplicando voltaje por corriente :D
def calcularPotencia(voltaje, corriente):
    return voltaje * corriente


# Calculamos las revoluciones por minuto del motor
# Aqui tuve que recordar que se divide entre el tiempo :(
def calcularRPM(vueltas, minutos):
    return vueltas / minutos


# Comprobamos que no se pase de los limites permitidos
def evaluarMotor(potencia, rpm):
    return potencia <= 60 and rpm <= 1000


# Imprimimos los resultados del motor
def mostrarResultados(potencia, rpm):
    print("\n--- REPORTE DEL MOTOR ---")
    print("Potencia consumida:", potencia, "watts")
    print("Velocidad del motor:", rpm, "RPM")

    # Si las dos condiciones se cumplen, todo esta bien
    if evaluarMotor(potencia, rpm):
        print("Estado: FUNCIONAMIENTO SEGURO :D")
    else:
        print("Estado: FUERA DE LOS LIMITES :(")


# Pedimos los datos al usuario
voltaje = float(input("Ingrese el voltaje: "))
corriente = float(input("Ingrese la corriente: "))
vueltas = float(input("Ingrese las vueltas realizadas: "))
minutos = float(input("Ingrese el tiempo en minutos: "))

# Evitamos que se ingresen datos negativos o tiempo cero
if minutos <= 0 or voltaje < 0 or corriente < 0 or vueltas < 0:
    print("Error: datos no validos.")
else:
    # Utilizamos los metodos para hacer los calculos
    potencia = calcularPotencia(voltaje, corriente)
    rpm = calcularRPM(vueltas, minutos)

    # Mostramos el reporte final :D
    mostrarResultados(potencia, rpm)
