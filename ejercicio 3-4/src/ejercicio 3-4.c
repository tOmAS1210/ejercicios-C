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

float pedir();
void mostrarNumero(float numero);


int main(void) {

	setbuf(stdout,NULL);

	mostrarNumero(pedir());

	return EXIT_SUCCESS;
}

float pedir()
{
	float numero;

	do{
		printf("ingrese un numero con decimal entre el 200 y 350: ");
		scanf("%f", &numero);
	}while(numero<200 || numero>350);

	return numero;
}

void mostrarNumero(float numero)
{
	printf("el numero con decimal ingresado es: %.2f", numero);
}
