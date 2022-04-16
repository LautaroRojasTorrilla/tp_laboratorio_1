/*
 * General.c
 *
 *  Created on: 10 abr. 2022
 *      Author: HP
 */

#include "General.h"

// OPERACIONES


float precioConDescuento(float precioIngresado, int porcentaje)
{
	float operacion;

	operacion = precioIngresado - (precioIngresado*porcentaje/100);
	//printf("\n%f", operacion);

	return operacion;
}

float precioConAumento(float precioIngresado, int porcentaje)
{
	float operacion;

	operacion = precioIngresado + (precioIngresado*porcentaje/100);
	//printf("\n%f", operacion);

	return operacion;
}

float precioBitcoin(float precioIngresado, float precioBitcoin)
{
	float operacion;

	operacion = precioIngresado / precioBitcoin;
	//printf("\n%f", operacion);

	return operacion;
}

float sumar(float sumando1, float sumando2)
{
	float operacion;

	operacion = sumando1 + sumando2;

	return operacion;
}

float restar(float minuendo, float sustraendo)
{
	float operacion;

	operacion = minuendo - sustraendo;

	return operacion;
}

float multiplicar(float factor1, float factor2)
{
	float operacion;

	operacion = factor1 * factor2;

	return operacion;
}

float dividir(float dividendo, float divisor)
{
	float operacion;

	if(divisor != 0)
	{
	operacion = dividendo / divisor;
	//printf("\n%f", operacion);
	}
	else
	{
	operacion = 0;
	printf("\nNo es posible la división por 0\n");
	// también puedo inicializar de una la operación con 0.
	}
	return operacion;
}

int dividir2(float *pResultado, int operador1, int operador2)
{
	float resultado;
	int retorno = -1;

	if (pResultado != NULL && operador2 != 0)
	{
		resultado = (float) operador1 / operador2;
		*pResultado = resultado;
		retorno = 0;
	}
	return retorno;
}

int maximoArray(int array[],int tam, int *maximo)
{
	int i;
	int maximoIngresado;
	int contadorOcurrencias;

	contadorOcurrencias = 0;

	for(i = 0;i<tam;i++)
	{
		if(array[i]>maximoIngresado || i == 0)
		{
			maximoIngresado = array[i];
		}
	}
	for(i = 0;i<tam;i++)
	{
		if(array[i]==maximoIngresado)
		{
			contadorOcurrencias++;
		}
	}
	*maximo = maximoIngresado;

	return contadorOcurrencias;
}

int minimoArray(int array[],int tam, int *minimo)
{
	int i;
	int minimoIngresado;
	int contadorOcurrencias;

	contadorOcurrencias = 0;

	for(i = 0; i<tam; i++)
	{
		if(array[i]<minimoIngresado || i == 0)
		{
			minimoIngresado = array[i];
		}
	}
	for(i = 0;i<tam;i++)
	{
		if(array[i]==minimoIngresado)
		{
			contadorOcurrencias++;
		}
	}
	*minimo = minimoIngresado;

	return contadorOcurrencias;
}

float calculaPromedio(int array[], int tam, float *pPromedio)
{
	int acumulador = 0;
	int i;
	int retorno = -1;

	if (tam >0 && pPromedio != NULL && array != NULL)
	{
		for(i=0;i<tam;i++)
		{
			acumulador += array[i];
		}
		*pPromedio = (float)acumulador / tam;
		retorno = 0; // salio ok
	}
	return retorno;
}

//INPUT

int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado)
{
	int retorno = -1;
	// la función no pudo tomar el dato correcto. Salió mal (Se inicia con eso).
	int auxiliarInt;
	// se guarda la variable que la persona nos ingrese, pero no sabemos si está bien.
	int retornoScanF;

	if (mensaje != NULL && reintentos > 0 && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL)
	{
		printf("%s", mensaje);
		retornoScanF = scanf("%d",&auxiliarInt);
		do {
			//printf("\t\n este es el reintento %d", reintentos);
			if (retornoScanF != 1 || auxiliarInt > maximo || auxiliarInt < minimo)
				// Si no se hace la validación, se pide que ingrese de nuevo
			{
				printf("%s", mensajeError);
				retornoScanF = scanf("%d", &auxiliarInt);
				reintentos--;
			} else {
				reintentos = 0;
				*pNumeroIngresado = auxiliarInt;
				// como todas las validaciones dieron ok. Guardo el número
				retorno = 0;
			}
		} while (reintentos > 0);
	}
	return retorno;
}

float getFloat(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresadoF)
{
	int retorno = -1;
	// la función no pudo tomar el dato correcto. Salió mal (Se inicia con eso).
	float auxiliarFloat;
	// se guarda la variable que la persona nos ingrese, pero no sabemos si está bien.
	float retornoScanF;

	if (mensaje != NULL && reintentos > 0 && minimo < maximo && mensajeError != NULL && pNumeroIngresadoF != NULL)
	{
		printf("%s", mensaje);
		retornoScanF = scanf("%f",&auxiliarFloat);
		do {
			//printf("\t este es el reintento %d", reintentos);
			if (retornoScanF != 1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
				// Si no se hace la validación, se pide que ingrese de nuevo
			{
				printf("%s", mensajeError);
				retornoScanF = scanf("%f", &auxiliarFloat);
				reintentos--;
			} else {
				reintentos = 0;
				*pNumeroIngresadoF = auxiliarFloat;
				// como todas las validaciones dieron ok. Guardo el número
				retorno = 0;
			}
		} while (reintentos > 0);
	}
	return retorno;
}

int utn_getNumero (int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int bufferInt; // espacio de almacenamiento intermedio

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos > -1)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d", &bufferInt);
			if (bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		} while (reintentos >= 0);
	}

	return retorno;
}

int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos)
{
	char bufferChar; // espacio de almacenamiento intermedio
	int retorno = -1;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos > -1)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c", &bufferChar);
			if (bufferChar >= minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s", mensajeError);
				reintentos--;
			}
		} while (reintentos >= 0);
	}
	return retorno;
}

void cargaArray(int array[], int tam)
{
	int i;

	for(i = 0;i<tam;i++)
	{
		printf("%d - Ingrese el número",i+1);
		scanf("%d",&array[i]);
	}
}

double getDOUBLE(double numero)
{
	double numeroIngresado;

	printf("\nFavor de ingresar un número\n");
	scanf("%lf", &numeroIngresado);

	return numeroIngresado;
}

int menuContinuar(char* mensaje)
{
	int seleccion;

	printf("%s", mensaje);
	printf("\n1. Sí\n2. No\n");
	fflush(stdin);
	scanf("%d", &seleccion);
	if (seleccion==2)
	{
		printf("\n\tGracias por utilizar este programa desarrollado por Lautaro Rojas Torrilla, estudiante UTN.");
	}

	return seleccion;
}

void mainMenu(int a, float b, float c)
{
	printf("1. Ingresar Kilómetros: (km=%d",a);
	printf(")\n\n2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f", b);
	printf(", Latam=%.2f", c);
	printf(")\n\t- Precio vuelo Aerolíneas:\n\t- Precio vuelo Latam:\n\n3. Calcular todos los costos:\n\ta) Tarjeta de débito (descuento 10%%)\n\tb) Tarjeta de crédito (interés 25%%)\n\tc) Bitcoin (1BTC -> 7556100.01 Pesos Argentinos)\n\td) Mostrar precio por km (precio unitario)\n\te) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n\n4. Informar Resultados\n\tLatam:\n\ta) Precio con tarjeta de débito: r\n\tb) Precio con tarjeta de crédito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tAerolíneas:\n\ta) Precio con tarjeta de débito: r\n\tb) Precio con tarjeta de crédito: r\n\tc) Precio pagando con bitcoin : r\n\td) Precio unitario: r\n\tLa diferencia de precio es : r\n\n5. Carga forzada de datos\n6. Salir");

}

// OOUTPUT

void printValues(int kilometros, float precioAero, float precioDebAero,  float precioCredAero, float precioBTCAero, float precioKMAero, float precioLatam, float precioDebLatam, float precioCredLatam, float precioBTCLatam, float precioKMLatam, float diferenciaPrecio)
{
	if(kilometros>=0 && precioAero>=0 && precioDebAero>=0 && precioCredAero>=0 && precioBTCAero>=0 && precioKMAero>=0 && precioLatam>=0 && precioDebLatam>=0 && precioCredLatam>=0 && precioBTCLatam>=0 && precioKMLatam>=0)
	{
	printf("\nKMs Ingresados: %d km.",kilometros);

	printf("\n\nPrecio Aerolineas: $ %.2f",precioAero);
	printf("\na) Precio con tarjeta de débito: $ %.2f", precioDebAero);
	printf("\nb) Precio con tarjeta de crédito: $ %.2f", precioCredAero);
	printf("\nc) Precio con bitcoin: %.6f BTC", precioBTCAero);
	printf("\nd) Precio por km: $ %.2f", precioKMAero);

	printf("\n\nPrecio Latam: $ %.2f",precioLatam);
	printf("\na) Precio con tarjeta de débito: $ %.2f", precioDebLatam);
	printf("\nb) Precio con tarjeta de crédito: $ %.2f", precioCredLatam);
	printf("\nc) Precio con bitcoin: %.6f BTC", precioBTCLatam);
	printf("\nd) Precio por km: $ %.2f", precioKMLatam);

	printf("\n\nLa diferencia de precio es: $ %.2f \n", diferenciaPrecio);
	}
	else
	{
		printf("\n\tAntes de mostrar precios. Favor de realizar los pasos 1, 2 y 3.");
	}
}

void forcedDataUpload()
{
	int xForzado=7090;
	float yForzado=162965;
	float zForzado=159339;
	float precioDescontadoYForzado;
	float precioAumentadoYForzado;
	float precioBitcoinYForzado;
	float precioKMYForzado;
	float precioDescontadoZForzado;
	float precioAumentadoZForzado;
	float precioBitcoinZForzado;
	float precioKMZForzado;
	float diferenciaPrecioYZForzado;
	int descuentoForzado=10;
	int interesForzado=25;
	float BTCForzado=7556100.01;

	precioDescontadoYForzado=precioConDescuento(yForzado, descuentoForzado);
	precioAumentadoYForzado=precioConAumento(yForzado, interesForzado);
	precioBitcoinYForzado=precioBitcoin(yForzado, BTCForzado);
	precioKMYForzado=dividir(yForzado, xForzado);
	precioDescontadoZForzado=precioConDescuento(zForzado, descuentoForzado);
	precioAumentadoZForzado=precioConAumento(zForzado, interesForzado);
	precioBitcoinZForzado=precioBitcoin(zForzado, BTCForzado);
	precioKMZForzado=dividir(zForzado, xForzado);
	diferenciaPrecioYZForzado=restar(zForzado, yForzado);

	printValues(xForzado, yForzado, precioDescontadoYForzado, precioAumentadoYForzado, precioBitcoinYForzado, precioKMYForzado, zForzado, precioDescontadoZForzado, precioAumentadoZForzado, precioBitcoinZForzado, precioKMZForzado, diferenciaPrecioYZForzado);
}

void imprimirArray(int array[], int tam)
{
	int i;
	for(i = 0;i<tam;i++)
	{
		printf("%d\n",array[i]);
	}
}


