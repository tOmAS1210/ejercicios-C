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

int main()
{
    setbuf(stdout,NULL);

	int numero;
	int total;
	float promedio;
	int i;


	total = 0;

	for(i=0; i<2; i++)
	{
		do{
			printf("ingrese un numero menor a 0: ");
			fflush(stdin);
			scanf("%d", &numero);
		}while(numero>0);
    	total += numero;
	}


	promedio = (float)total / 2;

	printf("el promedio de los numeros negativos es de: %.2f", promedio);



	return 0;

}
