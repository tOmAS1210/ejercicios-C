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

void sumaResta(char opciones,int num1, int num2);

int main(void) {
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	char opciones;

	do{
	printf("ingrese un numero entre 10 y 100: ");
	scanf("%d", &numero1);
	}while(numero1<10 || numero1>100);

	do{
	printf("ingrese un segundo numero entre 10 y 100: ");
	scanf("%d", &numero2);
	}while(numero2<10 || numero2>100);

	do{
	printf("ingrese s o r para sumar o restar: ");
	scanf("%c", &opciones);
	}while(opciones=='s' || opciones=='r');

	operaciones(opciones,numero1,numero2);

	return EXIT_SUCCESS;
}

void sumaResta(char opciones,int num1, int num2)
{
	int suma;
	int resta;

	scanf("%c", &opciones);//lo pongo dentro, para que al pedirlo por fuera con printf y scanf,
	                       //se guarde la respuesta en este scanf dentro de la otra funcion;
	if(opciones=='s')
	{
		suma = num1+num2;
		printf("el resultado de la suma es: %d", suma);
	}
	else if(opciones=='r')
	{
		resta = num1-num2;
		printf("el resultado de la resta es: %d", resta);
	}
}
