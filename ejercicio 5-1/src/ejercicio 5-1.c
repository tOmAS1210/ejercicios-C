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
//[]
/*int main(void) {
	setbuf(stdout,NULL);

	char nombre[20];

	printf("ingrese su nombre: ");
	fflush(stdin);
	scanf("%s", nombre);

	printf("su nombre es: %s", nombre);


	return EXIT_SUCCESS;
}*/

/*int main(void) {
	setbuf(stdout,NULL);

	int array[5];
	int i;

	for(i=0;i<5;i++)//carga secuencial
	{
	printf("ingrese un numero para la posicion %d: ", i);
	scanf("%d", &array[i]);
	}

	for(i=0;i<5;i++)//muestro los datos de mi array cargado
	{
	printf("\nel valor de la posicion %d es: %d", i, array[i]);
	}


	return EXIT_SUCCESS;
}*/

/*int main(void) {
	setbuf(stdout,NULL);

	int edad[10];
	float sueldo[10];
	int i;
	float acumuladorSueldo;

	acumuladorSueldo = 0;

	for(i=0; i<10; i++)
	{

		printf("\ningrese la edad del empleado con el legajo en la posicion %d: ", i);
		scanf("%d", &edad[i]);

		printf("\ningrese el sueldo del empleado con el legajo en la posicion %d: ", i);
		scanf("%f", &sueldo[i]);

		acumuladorSueldo += sueldo[i];
	}

	acumuladorSueldo = acumuladorSueldo/10;

	for(i=0; i<10; i++)
	{
		printf("\nel legajo del empleado es %d, su edad es: %d y su sueldo es %f:", i,edad[i], sueldo[i]);
	}
	printf("el promedio de todos los sueldos es %.2f: ", acumuladorSueldo);




	return EXIT_SUCCESS;
}*/


#define TAM 2
int inicializarArrays(int arrayEdades[], int cantidadElementos[]);


int main(void) {
	setbuf(stdout,NULL);

	int i;
	//int numero;
	int listaEdad[TAM];
	int listaSalario[TAM];
	int legajo;
	float salario;
	int edad;
	char respuesta = 'n';
	int retorno;
	int retorno1;


	retorno = inicializarArrays(listaEdad, TAM);
	retorno1 = inicializarArrays(listaSalario, TAM);

	if(retorno==0 && retorno1==0)
	{
			do{
			//carga aleatoria;
			printf("que legajo quiere completar: ");
			scanf("%d", &legajo);

			printf("ingrese la edad: ");
			scanf("%d", &edad);
			listaEdad[legajo] = edad;

			printf("ingrese el salario: ");
			scanf("%f", &salario);
			listaSalario[legajo] = salario;

			printf("desea continuar ingresando legajos? s/n");
			scanf("%c", &respuesta);
			}while(respuesta == 's');

			//muestro los datos de mi array cargado;
			for(i=0;i<TAM;i++)
			{
				if(listaEdad[i]!=0)
				{
					printf("\n para el legajo %d, la edad es %d y el salario es %.2f: ", i, listaEdad[i], listaSalario[i]);
				}
			}
	}
	else
	{
		printf("algo salio mal en la inicializacion");
	}


	return EXIT_SUCCESS;
}

int inicializarArrays(int arrayEdades[], int cantidadElementos[])
{
	int i;
	int retorno;
	retorno = -1;

	if(arrayEdades != NULL && cantidadElementos > 0 ){
		for(i=0;i<cantidadElementos;i++){
			arrayEdades[i] = 0;
		}
		retorno = 0;
	}
		return retorno;
}
