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

//int restar1(int num1, int num2); prototiposss
//int restar2(void);
//void restar3(int num1, int num2);
void restar4(void);

int main() {

	setbuf(stdout,NULL);//hice las 4 funciones pero en el main deje solo el de restar4;

	restar4();


	return EXIT_SUCCESS;
}

/*int restar1(int num1, int num2)
{
	int total;
	total = num1 - num2;

	return total;
}*/

/*int restar2(void)
{
	int num1;
	int num2;
	int total;

	printf("ingrese un numero: ");
	scanf("%d", &num1);

	printf("ingrese un numero: ");
	scanf("%d", &num2);

	total = num1-num2;
	return total;
}*/
/*void restar3(int num1, int num2)//recibe 2 numeros y no devuelve nada; asi que los muestro en la misma funcion que recive;
{
	int resultado;
	resultado = num1 - num2;
}*/
void restar4(void)
{
	int num1;
	int num2;
	int resta;

	printf("ingrese un numero: ");
	scanf("%d", &num1);

	printf("ingrese otro numero: ");
	scanf("%d", &num2);

	resta = num1 - num2;

	printf("la resta de los numeros es: %d", resta);

}
