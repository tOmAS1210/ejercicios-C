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


int main(void) {
	setbuf(stdout,NULL);

	int numero=0;
	double factorial=1;
	int i;

	numero = pedir(numero);

	for(i=numero; i>1;--i)
	{
		factorial *= i;
	}

	printf("\nel valor del factorial del numero ingresado es: %lf", factorial);

	return EXIT_SUCCESS;
}
