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
	int menuIngreso;
	int retornoMenu;
	// Le muestro el menu al usuario en un bucle dowhile hasta que el quiera.

	do{
	printf("1. Ingresar Kilómetros: (km=x)\n\n2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)\n\t- Precio vuelo Aerolíneas:\n\t- Precio vuelo Latam:\n\n3. Calcular todos los costos:\n\ta) Tarjeta de débito (descuento 10%)\n\tb) Tarjeta de crédito (interés 25%)\n\tc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n\td) Mostrar precio por km (precio unitario)\n\te) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n4. Informar Resultados\n\tLatam:\n\ta) Precio con tarjeta de débito: r\n\tb) Precio con tarjeta de crédito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tAerolíneas:\n\ta) Precio con tarjeta de débito: r\n\tb) Precio con tarjeta de crédito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tLa diferencia de precio es : r\n\n5. Carga forzada de datos\n6. Salir");
	retornoMenu=getInt("\n\nFavor de ingresar una de las opciones:", 2, 1, 6, "\nHa seleccionado una opción no válida. Ingrese de a 1 a 6", &opcionIngresada);

	if (retornoMenu == -1)
	{
		printf("\nHa agatoado todos los intentos. Desea volver a iniciar el programa?");
	}
	else
	{
	menuIngreso=opcionIngresada;
	switch(menuIngreso)
	{
		case 1:
			puts("\nEntro 1");
		break;
		case 2:
			puts("\nEntro 2");
		break;
		case 3:
			puts("\nEntro 3");
		break;
		case 4:
			puts("\nEntro 4");
		break;
		case 5:
			puts("\nEntro 5");
		break;
		case 6:
			puts("\nEntro 6");
		break;
		default:
			puts("\nEntro d");
		break;
	}//fin del switch
	}//fin del else
	} while (menuContinuar("Selecciona una opción..")==1);// fin dowwhile

}//fin del programa
