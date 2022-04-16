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

#define DESCUENTO 10
#define INTERES 25
#define BITCOIN 7556100.01

int main(void) {
	setbuf(stdout, NULL);

	int opcionIngresada;
	int x=0;
	float y=0;
	float z=0;
	int menuIngreso;
	int retornoMenu;
	int auxiliarX;
	int retornoX;
	int retornoOpcion2;
	int opcionIngresadaSub2;
	float auxiliarY;
	float auxiliarZ;
	float retornoY;
	float retornoZ;
	float precioDescontadoY=0;
	float precioAumentadoY=0;
	float precioBitcoinY=0;
	float precioKMY=0;
	float precioDescontadoZ=0;
	float precioAumentadoZ=0;
	float precioBitcoinZ=0;
	float precioKMZ=0;
	float diferenciaPrecioYZ=0;

	// Le muestro el menu al usuario en un bucle dowhile hasta que el quiera.
	// Se inicializaron algunas variables para que el usuario pueda ver el manú con 0s y sea más amigable.

	do{
	mainMenu(x, y, z);
	retornoMenu=getInt("\n\nFavor de ingresar una de las opciones:", 2, 1, 6, "\nHa seleccionado una opción no válida. Ingrese de a 1 a 6", &opcionIngresada);

	if (retornoMenu == -1)
	{
		printf("\nHa agotado todos los intentos.");
	}
	else
	{
		menuIngreso=opcionIngresada;
		switch(menuIngreso)
	{
		case 1:
			//puts("\nEntro 1");
			retornoX=getInt("\nFavor de ingresar la cantidad de kilómetos", 2, 1, 30000, "Ha seleccionado una opción no válida. Vuelva a ingesar entre 1 y 30000:", &auxiliarX);
			if (retornoX == -1)
			{
				printf("\nHa agotado todos los intentos.");
			}
			else
			{
				x = auxiliarX;
				//printf("\n%d", auxiliarX);
				//printf("\n%d", x);
				retornoMenu=-1;
			}
			break;
		case 2:
			//puts("\nEntro 2");
			// se muestra el submenu de la opción 2.
			// valida de que se haya ingresado kms.
			if(x<1)
			{
				printf("\nFavor de ingresar los KMs en la opción 1");
			}
			else
			{
				do {
					printf("\n\t1. Precio vuelo Aerolíneas: \n\t2. Precio vuelo Latam:");
					retornoOpcion2=getInt("\n\nFavor de ingresar una de las opciones:", 2, 1, 2, "\nHa seleccionado una opción no válida. Ingrese 1 o 2", &opcionIngresadaSub2);
					if (retornoOpcion2 == -1)
					{
						printf("\nHa agotado todos los intentos.");
					}
					else
					{
						switch(opcionIngresadaSub2)
						{
							case 1:
								//puts("\nEntro 1");
								retornoY=getFloat("\nFavor de ingresar el precio del vuelo", 2, 1, 200000, "Ha seleccionado una opción no válida. Vuelva a ingresar entre 1 y 200000:", &auxiliarY);
								if (retornoY == -1)
								{
									printf("\nHa agotado todos los intentos.");
								}
								else
								{
									y = auxiliarY;
									//printf("\n%f", auxiliarY);
									//printf("\n%f", y);
									retornoMenu=-1;
								}
							break;
							default:
								//puts("\nEntro 2");
								retornoZ=getFloat("\nFavor de ingresar el precio del vuelo", 2, 1, 200000, "Ha seleccionado una opción no válida. Vuelva a ingresar entre 1 y 200000:", &auxiliarZ);
								if (retornoZ == -1)
								{
									printf("\nHa agotado todos los intentos.");
								}
								else
								{
									z = auxiliarZ;
									//printf("\n%f", auxiliarZ);
									//printf("\n%f", z);
									retornoMenu=-1;
								}
							break;
						}
					}
				} while (menuContinuar("\nDesea volver a ingresar los valores? Seleccione una opción:")==1);
			}
		break;
		case 3:
			//mi programa realiza todos los cálculos teniendo que habiendo ingresado ambos precios.
			//puts("\nEntro 3");
			if (y<1 && z<1)
			{
				printf("\nFavor de ingresar ambos precios en la opción 2, previo haber cargado los KMs en la opción 1");
			}
			else
			{
				precioDescontadoY=precioConDescuento(y, DESCUENTO);
				precioAumentadoY=precioConAumento(y, INTERES);
				precioBitcoinY=precioBitcoin(y, BITCOIN);
				precioKMY=dividir(y, x);//no va a arrojar mensaje de error porque se inicializó con 0.
				precioDescontadoZ=precioConDescuento(z, DESCUENTO);
				precioAumentadoZ=precioConAumento(z, INTERES);
				precioBitcoinZ=precioBitcoin(z, BITCOIN);
				precioKMZ=dividir(z, x);//no va a arrojar mensaje de error porque se inicializó con 0.
				diferenciaPrecioYZ=restar(z, y);
				printf("Los costos fueron calculados, está habilitado para visualizarlos en la opción 4.");
			}
		break;
		case 4:
			//Se iniciaron las variables con 0 para que muestre directamente los valores.
			//Empero se realizó la respectiva validación dentro de la función.
			//En la próxima implementación se podrá seleccionar qué dato se desea imprimir.
			//puts("\nEntro 4");
			if (precioDescontadoY<1 && precioAumentadoY<1 && precioDescontadoZ<1 && precioAumentadoZ<1)
			{
				printf("\nPara mostrar los resultados, tiene que haberlos calculado primero en la opción 3");
			}
			else
			{
				printValues(x, y, precioDescontadoY, precioAumentadoY, precioBitcoinY, precioKMY, z, precioDescontadoZ, precioAumentadoZ, precioBitcoinZ, precioKMZ, diferenciaPrecioYZ);
			}
		break;
		case 5:
			//puts("\nEntro 5");
			forcedDataUpload();
		break;
		case 6:
			//puts("\nEntro 6");
			printf("\n\tGracias por utilizar este programa desarrollado por Lautaro Rojas Torrilla, estudiante UTN.");
			exit (-1);
		break;
		default:
			//puts("\nEntro d");
			printf("Ha seleccionado una opción no válida. Favor de elegir entre 1 y 6: ");
		break;
	}//fin del switch
	}//fin del else
	} while (menuContinuar("\n\nDesea volver a iniciar el programa? Seleccione una opción:")==1 || menuIngreso==6);// fin dowwhile
}//fin del programa
