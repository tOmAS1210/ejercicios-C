/*
 * funciones2.c
 *
 *  Created on: 6 sep. 2022
 *      Author: USER
 */

void temperaturaCelsiusPasandoFahrenheit(float* celciusFahrenheit)
{
	float pasoDeCelsiusFarhenheit;

	printf("ingrese una temperatura en Celsius para pasar a Fahrenheit: ");
	scanf("%f", &pasoDeCelsiusFarhenheit);

	*celciusFahrenheit = (pasoDeCelsiusFarhenheit*9/5) + 32;
}

void temperaturaFahrenheitPasandoCelsius(float* fahrenheit)
{
	float pasoDeFahrenheitCelsius;

	printf("ingrese una temperatura en Fahrenheit para pasar a Celsius: ");
	scanf("%f", &pasoDeFahrenheitCelsius);

	*fahrenheit = (pasoDeFahrenheitCelsius-32)*5/9;
}


