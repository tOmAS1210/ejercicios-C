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

void mostrarNumero(int numero);

int main(void) {
	setbuf(stdout,NULL);

	int num;


	printf("ingrese un numero entero: " );
	scanf("%d", &num);
	mostrarNumero(num);


	return EXIT_SUCCESS;
}

void mostrarNumero(int numero)
{
	printf("el numero entero ingresado es : %d", numero);
}