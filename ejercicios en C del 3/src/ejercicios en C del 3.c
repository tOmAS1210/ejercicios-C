/*
 ============================================================================
 Name        : ejercicios.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int pedirNumero();//prototipo
int sumar(int num1, int num2); //parametros formales estan declarados dentro de los parentesis;


int main(void)
{
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	int resultado;


	numero1 = pedirNumero();
	numero2 = pedirNumero();

	resultado = sumar(numero1, numero2);//parametros actuales, reales o verdaderos se usan en la llamada;

	printf("la suma es: %d", resultado);


	return EXIT_SUCCESS;
}

int pedirNumero()//desarrollo de la funcion;
{
	int numero;

	printf("\n ingrese un numero: ");
	scanf("%d", &numero);


	return numero;
}

int sumar(int num1, int num2)
{
	int total;

	total = num1 + num2;

	return total;
}
