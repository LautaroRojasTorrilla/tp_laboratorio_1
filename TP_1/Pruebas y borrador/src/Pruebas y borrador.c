/*
 ============================================================================
 Name        : Pruebas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado)
	{
		int retorno = -;
		int auxiliarInt;
		int retornoScanF;

		if (mensaje !=NULL && reintentos > 0 && minimo < maximo && mensajeError != NULL && pNumeroIngresado!=NULL) {
			printf("%s", mensaje);
			retornoScanf=scanf("%d",&auxiliarInt);
			do {
				printf("\t este es el reintento %d", reintentos);
				if (retornoScanF != 1 || auxiliarInt > maximo || auxiliarInt < minimo) {
					print("%s", mensajeError);
					retornoScanF =scanf ("%d", &auxiliarInt);
					reintentos--;
				} else {
					reintentos = 0;
				}
			} while (reintentos>0);
		}
	return retorno;
	}


	return EXIT_SUCCESS;
}


//MENU
/*
 	int operacion;
	int menuIngreso;
	float numero1;
	float numero2;
	int tipoOperacion;

	do {
		menuIngreso = menu(tipoOperacion);
		switch (menuIngreso) {
		case 1:
			puts("Entro 1");
			break;
		case 2:
			puts("Entro 2");
			break;
		case 3:
			puts("Entro 3");
			break;
		case 4:
			puts("Entro 4");
			break;
		default:
			puts("Opción no valida.");
			break;
		} // fin switch
	} while (continuar("Desea realizar otra operación? Seleccione una opción") == 1);
}
 */
