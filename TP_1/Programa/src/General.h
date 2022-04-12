/*
 * General.h
 *
 *  Created on: 10 abr. 2022
 *      Author: HP
 */

#ifndef GENERAL_H_
#define GENERAL_H_

#include <stdio.h>
#include <stdlib.h>

// CALCULOS
float sumar(float sumando1, float sumando2);
float restar(float sumando1, float sumando2);
float multiplicar(float factor1, float factor2);
float dividir(float dividendo, float divisor);
int dividir2(float *pResultado, int operador1, int operador2);
int maximoArray(int array[],int tam, int *maximo);
int minimoArray(int array[],int tam, int *minimo);
float calculaPromedio(int array[], int tam, float *pPromedio);

// INPUT

int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);
float getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado);
int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos);
void cargaArray(int array[], int tam);
double getDOUBLE(double);
int menuContinuar(char* mensaje);

// OUTPUT

void imprimirArray(int array[], int tam);

#endif /* GENERAL_H_ */
