/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "funciones.h"
#include "funciones2.h"

void temperaturaEnCelsius(float* tempCelsius);
void temperaturaEnFahrenheit(float* tempFahrenheit);

void temperaturaCelsiusPasandoFahrenheit(float* celsius);
void temperaturaFahrenheitPasandoCelsius(float* fahrenheit);

int main(void) {

	setbuf(stdout,NULL);

	float valorCelsius;
	float valorFahrenheit;
	float celsiusFahrenheit;
	float fahrenheitCelsius;

	temperaturaEnCelsius(&valorCelsius);
	temperaturaEnFahrenheit(&valorFahrenheit);
	temperaturaCelsiusPasandoFahrenheit(&celsiusFahrenheit);
	temperaturaFahrenheitPasandoCelsius(&fahrenheitCelsius);

	printf("\nla temperatura ingresada en grados Celcius es: %.2f", valorCelsius);
	printf("\nla temperatura ingresada en grados Fahrenheit es: %.2f", valorFahrenheit);
	printf("\nla temperatura ingresada en C, fue pasada a F y su temperatura en F es: %.2f", celsiusFahrenheit);
	printf("\nla temperatura ingresada en F, fue pasada a C y su temperatura en C es: %.2f", fahrenheitCelsius);

	return EXIT_SUCCESS;
}
