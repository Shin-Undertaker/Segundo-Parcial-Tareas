
# Creamos las listas donde vamos a guardar todo
nombres = []
mediciones = []

# Primero preguntamos cuantos sensores hay
print("MONITOREO DE SENSORES")
cantidad = int(input("Cantidad de sensores (maximo 10): "))

# No hay espacio infinito, maximo 10 sensores JAJA
if cantidad < 1 or cantidad > 10:
    print("Cantidad no valida. Debe ser entre 1 y 10.")
else:
    # Vamos pidiendo los datos de cada sensor
    for i in range(cantidad):
        nombre = input(f"\nNombre del sensor {i + 1}: ")
        valor = float(input("Valor registrado: "))

        # Guardamos cada dato en su lista correspondiente
        nombres.append(nombre)
        mediciones.append(valor)

    # A ver como salieron las mediciones
    print("\n--- RESULTADOS DEL MONITOREO ---")

    for i in range(cantidad):
        print("\nSensor:", nombres[i])
        print("Medicion:", mediciones[i])

        # Menos de 50 significa que todo esta normal
        if mediciones[i] < 50:
            print("Estado: Normal")
        # Entre 50 y 80 toca estar pendientes
        elif mediciones[i] <= 80:
            print("Estado: Requiere supervision")
        # Mas de 80 ya es para preocuparse
        else:
            print("Estado: Critico")

