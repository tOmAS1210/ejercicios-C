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

int comprobarPar();

int main(void) {
	setbuf(stdout,NULL);

	int numero;

	printf("ingrese un numero: ");
	scanf("%d", &numero);

	if(comprobar(numero)==1)
	{
		printf("el numero ingresado es par");//ejercicio no entregado aun;
	}
	else
	{
		printf("el numero ingresado no es par");
	}

	return EXIT_SUCCESS;
}

int comprobarPar(int numero)
{
	if(numero%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}