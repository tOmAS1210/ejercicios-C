/*
 * funciones.c
 *
 *  Created on: 6 sep. 2022
 *      Author: USER
 */


void temperaturaEnCelsius(float* tempCelsius)
{
	float valorCelsius;

	do
	{
		printf("ingrese una temperatura en Celsius entre 0ºC y 100ºC celsius: ");
		scanf("%f", &valorCelsius);
		*tempCelsius = valorCelsius;
	}while(valorCelsius<0 || valorCelsius>100);
}

void temperaturaEnFahrenheit(float* tempFahrenheit)
{
	float valorFahrenheit;

	do{
		printf("ingrese una temperatura en fahrenheit entre 32ºF y 212ºF Fahrenheit: ");
		scanf("%f", &valorFahrenheit);
		*tempFahrenheit = valorFahrenheit;
	}while(valorFahrenheit>212 || valorFahrenheit<32);
}
