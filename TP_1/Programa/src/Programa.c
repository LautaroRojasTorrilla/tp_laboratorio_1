/*
 ============================================================================
 Name        : Programa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "General.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcionIngresada;
	int x;
	int y;
	int z;

	// Le muestro el menu al usuario en un bucle dowhile hasta que el quiera.

	printf("1. Ingresar Kil�metros: (km=x)\n\n2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)\n\t- Precio vuelo Aerol�neas:\n\t- Precio vuelo Latam:\n\n3. Calcular todos los costos:\n\ta) Tarjeta de d�bito (descuento 10%)\n\tb) Tarjeta de cr�dito (inter�s 25%)\n\tc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n\td) Mostrar precio por km (precio unitario)\n\te) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)\n\n4. Informar Resultados\n\tLatam:\n\ta) Precio con tarjeta de d�bito: r\n\tb) Precio con tarjeta de cr�dito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tAerol�neas:\n\ta) Precio con tarjeta de d�bito: r\n\tb) Precio con tarjeta de cr�dito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tLa diferencia de precio es : r\n\n5. Carga forzada de datos\n6. Salir");
	getInt("\n\nFavor de ingresar una de las opciones", 2, 1, 6, "Ha seleccionado una opci�n no v�lida", &opcionIngresada);

	return EXIT_SUCCESS;
}
