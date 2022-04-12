/*
 * General.c
 *
 *  Created on: 10 abr. 2022
 *      Author: HP
 */

#include "General.h"

// OPERACIONES

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
			printf("\t este es el reintento %d", reintentos);
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

int menuContinuar(char* mensaje) // HAY QUE HACERLE LAS VALIDACIONES
{
	int seleccion;

	printf("%s", mensaje);
	printf("\n1. Sí\n2. No\n");
	scanf("%d", &seleccion);

	return seleccion;
}

// OUTPUT

void imprimirArray(int array[], int tam)
{
	int i;
	for(i = 0;i<tam;i++)
	{
		printf("%d\n",array[i]);
	}
}
