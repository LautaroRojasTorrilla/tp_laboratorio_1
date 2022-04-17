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
/// @brief La funci�n se encarga de calcular el precio final que tendr� con el descuento.
///
/// @param precioIngresado El precio inicial.
/// @param porcentaje El porcentaje que se descontar�.
/// @return retorna un float con el resultado de la operaci�n.
float precioConDescuento(float precioIngresado, int porcentaje);

/// @fn float precioConAumento(float, int)
/// @brief La funci�n se encarga de calcular el precio final que tendr� con el aumento.
///
/// @param precioIngresado El precio inicial.
/// @param porcentaje El porcentaje que se descontar�.
/// @return retorna un float con el resultado de la operaci�n.
float precioConAumento(float precioIngresado, int porcentaje);

/// @fn float precioBitcoin(float, float)
/// @brief La funci�n se encarga de calcular el precio en bitcoins, con una regla de 3 simple
///
/// @param precioIngresado El precio inicial.
/// @param precioBitcoin El precio del bitcoin en la misma unidad que el precio inicial
/// @return retorna un float con el resultado de la operaci�n.
float precioBitcoin(float precioIngresado, float precioBitcoin);

float sumar(float sumando1, float sumando2);
float restar(float sumando1, float sumando2);
float multiplicar(float factor1, float factor2);

/// @fn float dividir(float, float)
/// @brief La funci�n se encarga de realizar una divis�n, valida que el divisor sea distinto de 0.
///
/// @param dividendo Es el n�mero a dividir.
/// @param divisor Es el n�mero que divide.
/// @return retorna un float con el resultado de la operaci�n
float dividir(float dividendo, float divisor);

int dividir2(float *pResultado, int operador1, int operador2);
int maximoArray(int array[],int tam, int *maximo);
int minimoArray(int array[],int tam, int *minimo);
float calculaPromedio(int array[], int tam, float *pPromedio);

// INPUT

/// @fn int getInt(char[], int, int, int, char[], int*)
/// @brief Solicita un entero realizando validaciones.
///
/// @param mensaje Es el mensaje editable que muestra qu� se est� ingresando (previo a scanf).
/// @param reintentos Es la cantidad de reintentos tras fallar la validaci�n.
/// @param minimo Es el valor m�nimo que tolera la funci�n.
/// @param maximo Es el valor m�ximo que tolera la funci�n.
/// @param mensajeError Es el mensaje que brindar� tras fallar la validaci�n.
/// @param pNumeroIngresado Puntero de la direcci�n del entero.
/// @return Retorna -1 si no pasa la validaci�n y 0 si el entero ingresado aprueba la validaci�n.
int getInt(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);

/// @fn float getFloat(char[], int, int, int, char[], float*)
/// @brief Solicita un flotante realizando validaciones.
///
/// @param mensaje Es el mensaje editable que muestra qu� se est� ingresando (previo a scanf).
/// @param reintentos Es la cantidad de reintentos tras fallar la validaci�n.
/// @param minimo Es el valor m�nimo que tolera la funci�n.
/// @param maximo Es el valor m�ximo que tolera la funci�n.
/// @param mensajeError Es el mensaje que brindar� tras fallar la validaci�n.
/// @param pNumeroIngresado Puntero de la direcci�n del entero.
/// @return Retorna -1 si no pasa la validaci�n y 0 si el entero ingresado aprueba la validaci�n.
float getFloat(char mensaje[],int reintentos, int minimo, int maximo, char mensajeError[], float *pNumeroIngresado);

int utn_getNumero(int *pResultado, char *mensaje, char *mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float *pResultado, char *mensaje, char *mensajeError, float minimo, float maximo, int reintentos);
int utn_getCaracter(char *pResultado, char *mensaje, char *mensajeError, char minimo, char maximo, int reintentos);
void cargaArray(int array[], int tam);
double getDOUBLE(double);

/// @fn int menuContinuar(char*)
/// @brief Es el men� utilizado para las iteraciones dowhile del programa. Con un agradecimiento especial.
///
/// @param mensaje Es el mensaje que muestra qu� se est� ingresando (las respuestas son 1 para s� y 2 para no).
/// @return retorna la selecci�n que se hizo. 1 para continuar; 2 para finalizar el bucle.
int menuContinuar(char* mensaje);

/// @fn int menuContinuar2(char*)
/// @brief Realiza la misma acci�n que "int menuContinuar". No tiene el mensaje de agradecimiento.
///
/// @param mensaje Es el mensaje que muestra qu� se est� ingresando (las respuestas son 1 para s� y 2 para no).
/// @return retorna la selecci�n que se hizo. 1 para continuar; 2 para finalizar el bucle.
int menuContinuar2(char* mensaje);

// OUTPUT

/// @fn void printValues(int, float, float, float, float, float, float, float, float, float, float, float)
/// @brief La funci�n se encarga de mostrar los valores que se calcularon en operaciones anteriores.
///
/// @param kilometros Son los kil�metros del vuelo.
/// @param precioAero El precio de Aerol�neas.
/// @param precioDebAero El precio de Aerol�neas con el descuento por abonar con d�bito.
/// @param precioCredAero El precio de Aerol�neas con el aumento por abonar con cr�dito.
/// @param precioBTCAero El precio de Aerol�neas en bitcoins.
/// @param precioKMAero El precio unitario de Aerol�neas en funci�n a los kil�metros.
/// @param precioLatam El precio de Latam.
/// @param precioDebLatam El precio de Latam con el descuento por abonar con d�bito.
/// @param precioCredLatam El precio de Latam con el aumento por abonar con cr�dito.
/// @param precioBTCLatam El precio de Latam en bitcoins.
/// @param precioKMLatam El precio unitario de Latam en funci�n a los kil�metros.
/// @param diferenciaPrecio Es la diferencia de precios entre Latam y Aerol�neas
/// @return Retorna Void, solo muestra las impresiones.
void printValues(int kilometros, float precioAero, float precioDebAero,  float precioCredAero, float precioBTCAero, float precioKMAero, float precioLatam, float precioDebLatam, float precioCredLatam, float precioBTCLatam, float precioKMLatam, float diferenciaPrecio);

/// @fn void forcedDataUpload()
/// @brief Es la funci�n "void printValues" con los datos hardcodeados/forzados.
///
/// @param no tiene par�metros, est� todo dentro de la funci�n.
/// @return Retorna Void, muestra las impresiones.
void forcedDataUpload();

/// @fn void mainMenu(int, float, float)
/// @brief Es el men� principal que se utilizar� para la funci�n.
///
/// @param a Espacio reservado para la variable km=x.
/// @param b Espacio reservado para la variable Aerol�neas=y.
/// @param c Espacio reservado para la variable Latam=z.
/// /// @return Retorna Void, muestra las impresiones.
void mainMenu(int a, float b, float c);

void imprimirArray(int array[], int tam);

#endif /* GENERAL_H_ */
