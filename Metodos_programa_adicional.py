
# Sacamos el promedio de las tres calificaciones
def calcularPromedio(c1, c2, c3):
    return (c1 + c2 + c3) / 3


# Revisamos si el alumno aprobo
def evaluarAlumno(promedio):
    return promedio >= 70


# Imprimimos el reporte final
def mostrarResultados(promedio):
    print("\n--- REPORTE DEL ALUMNO ---")
    print("Promedio:", promedio)

    # Aqui vemos si pasamos o nos toca sufrir :(
    if evaluarAlumno(promedio):
        print("Estado: APROBADO :D")
    else:
        print("Estado: REPROBADO :(")


# Pedimos las tres calificaciones
c1 = float(input("Ingrese la primera calificacion: "))
c2 = float(input("Ingrese la segunda calificacion: "))
c3 = float(input("Ingrese la tercera calificacion: "))

# Verificamos que ninguna calificacion sea invalida
if not (0 <= c1 <= 100 and
        0 <= c2 <= 100 and
        0 <= c3 <= 100):
    print("Error: calificaciones invalidas.")
else:
    # Calculamos el promedio y presentamos el reporte
    promedio = calcularPromedio(c1, c2, c3)
    mostrarResultados(promedio)
  