/*
 * General.h
 *
 *  Created on: 10 abr. 2022
 *      Author: HP
 *
 * SE DOCUMENTARON LAS FUNCIONES UTILIZADAS EN EL PROGRAMA.
 */

#ifndef GENERAL_H_
#define GENERAL_H_

#include <stdio.h>
#include <stdlib.h>

// CALCULOS

/// @fn float precioConDescuento(float, int)
/// @brief La función se encarga de calcular el precio final que tendrá con el descuento.
///
/// @param precioIngresado El precio inicial.
/// @param porcentaje El porcentaje que se descontará.
/// @return retorna un float con el resultado de la operación.
float precioConDescuento(float precioIngresado, int porcentaje);

/// @fn float precioConAumento(float, int)
/// @brief La función se encarga de calcular el precio final que tendrá con el aumento.
///
/// @param precioIngresado El precio inicial.
/// @param porcentaje El porcentaje que se descontará.
/// @return retorna un float con el resultado de la operación.
float precioConAumento(float precioIngresado, int porcentaje);

/// @fn float precioBitcoin(float, float)
/// @brief La función se encarga de calcular el precio en bitcoins, con una regla de 3 simple
///
/// @param precioIngresado El precio inicial.
/// @param precioBitcoin El precio del bitcoin en la misma unidad que el precio inicial
/// @return retorna un float con el resultado de la operación.
float precioBitcoin(float precioIngresado, float precioBitcoin);

float sumar(float sumando1, float sumando2);
float restar(float sumando1, float sumando2);
float multiplicar(float factor1, float factor2);

/// @fn float dividir(float, float)
/// @brief La función se encarga de realizar una divisón, valida que el divisor sea distinto de 0.
///
/// @param dividendo Es el número a dividir.
/// @param divisor Es el número que divide.
/// @return retorna un float con el resultado de la operación
float dividir(float dividendo, float divisor);

int dividir2(float *pResultado, int operador1, int operador2);
int maximoArray(int array[],int tam, int *maximo);
int minimoArray(int array[],int tam, int *minimo);
float calculaPromedio(int array[], int tam, float *pPromedio);

// INPUT

/// @fn int getInt(char[], int, int, int, char[], int*)
/// @brief Solicita un entero realizando validaciones.
///
/// @param mensaje Es el mensaje editable que muestra qué se está ingresando (previo a scanf).
/// @param reintentos Es la cantidad de reintentos tras fallar la validación.
/// @param minimo Es el valor mínimo que tolera la función.
/// @param maximo Es el valor máximo que tolera la función.
/// @param mensajeError Es el mensaje que brindará tras fallar la validación.
/// @param pNumeroIngresado Puntero de la dirección del entero.
/// @return Retorna -1 si no pasa la validación y 0 si el entero ingresado aprueba la validación.
int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);

/// @fn float getFloat(char[], int, int, int, char[], float*)
/// @brief Solicita un flotante realizando validaciones.
///
/// @param mensaje Es el mensaje editable que muestra qué se está ingresando (previo a scanf).
/// @param reintentos Es la cantidad de reintentos tras fallar la validación.
/// @param minimo Es el valor mínimo que tolera la función.
/// @param maximo Es el valor máximo que tolera la función.
/// @param mensajeError Es el mensaje que brindará tras fallar la validación.
/// @param pNumeroIngresado Puntero de la dirección del entero.
/// @return Retorna -1 si no pasa la validación y 0 si el entero ingresado aprueba la validación.
float getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado);

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos);
void cargaArray(int array[], int tam);
double getDOUBLE(double);

/// @fn int menuContinuar(char*)
/// @brief Es el menú utilizado para las iteraciones dowhile del programa. Con un agradecimiento especial.
///
/// @param mensaje Es el mensaje que muestra qué se está ingresando (las respuestas son 1 para sí y 2 para no).
/// @return retorna la selección que se hizo. 1 para continuar; 2 para finalizar el bucle.
int menuContinuar(char* mensaje);

/// @fn int menuContinuar2(char*)
/// @brief Realiza la misma acción que "int menuContinuar". No tiene el mensaje de agradecimiento.
///
/// @param mensaje Es el mensaje que muestra qué se está ingresando (las respuestas son 1 para sí y 2 para no).
/// @return retorna la selección que se hizo. 1 para continuar; 2 para finalizar el bucle.
int menuContinuar2(char* mensaje);

// OUTPUT

/// @fn void printValues(int, float, float, float, float, float, float, float, float, float, float, float)
/// @brief La función se encarga de mostrar los valores que se calcularon en operaciones anteriores.
///
/// @param kilometros Son los kilómetros del vuelo.
/// @param precioAero El precio de Aerolíneas.
/// @param precioDebAero El precio de Aerolíneas con el descuento por abonar con débito.
/// @param precioCredAero El precio de Aerolíneas con el aumento por abonar con crédito.
/// @param precioBTCAero El precio de Aerolíneas en bitcoins.
/// @param precioKMAero El precio unitario de Aerolíneas en función a los kilómetros.
/// @param precioLatam El precio de Latam.
/// @param precioDebLatam El precio de Latam con el descuento por abonar con débito.
/// @param precioCredLatam El precio de Latam con el aumento por abonar con crédito.
/// @param precioBTCLatam El precio de Latam en bitcoins.
/// @param precioKMLatam El precio unitario de Latam en función a los kilómetros.
/// @param diferenciaPrecio Es la diferencia de precios entre Latam y Aerolíneas
/// @return Retorna Void, solo muestra las impresiones.
void printValues(int kilometros, float precioAero, float precioDebAero,  float precioCredAero, float precioBTCAero, float precioKMAero, float precioLatam, float precioDebLatam, float precioCredLatam, float precioBTCLatam, float precioKMLatam, float diferenciaPrecio);

/// @fn void forcedDataUpload()
/// @brief Es la función "void printValues" con los datos hardcodeados/forzados.
///
/// @param no tiene parámetros, está todo dentro de la función.
/// @return Retorna Void, muestra las impresiones.
void forcedDataUpload();

/// @fn void mainMenu(int, float, float)
/// @brief Es el menú principal que se utilizará para la función.
///
/// @param a Espacio reservado para la variable km=x.
/// @param b Espacio reservado para la variable Aerolíneas=y.
/// @param c Espacio reservado para la variable Latam=z.
/// /// @return Retorna Void, muestra las impresiones.
void mainMenu(int a, float b, float c);

void imprimirArray(int array[], int tam);

#endif /* GENERAL_H_ */
