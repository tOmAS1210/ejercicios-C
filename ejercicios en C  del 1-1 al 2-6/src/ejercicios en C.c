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

	   /* Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
	    resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
	    da como resultado 5”*/

	    /*int primerValor;
	    int segundoValor;
	    int suma;

	    printf("ingrese un valor ");
	    scanf("%d", &primerValor);

	    printf("ingrese el segundo valor ");
	    scanf("%d", &segundoValor);

	    do{
	        suma = primerValor+segundoValor;
	    }while(suma>100 || suma<-50);

	    printf("la suma entre %d y el de %d es de: %d", primerValor,segundoValor,suma);*/

	    /*
	    Ejercicio 1-2: ingresar 3 números y mostrar cuál de los tres es el mayor.
	    Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
	    segundo: 9”

	    int primerValor;
	    int segundoValor;
	    int tercerValor;
	    int posicion;
	    int valor;

	    printf("ingrese un valor ");
	    scanf("%d", &primerValor);

	    printf("ingrese un segundo valor ");
	    scanf("%d", &segundoValor);

	    printf("ingrese un tercerValor ");
	    scanf("%d", &tercerValor);


	    if(primerValor>segundoValor && primerValor>tercerValor)
	    {
	        valor = primerValor;
	        posicion = 1;
	    }
	    else if(segundoValor>tercerValor)
	    {
	        valor = segundoValor;
	        posicion = 2;
	    }
	    else
	    {
	        valor = tercerValor;
	        posicion = 3;
	    }

	     printf("el valor mas grande es: %d y la posicion es: %d",valor,posicion);*/


	    /*
	    Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En
	    caso de que no exista también informarlo.
	    Ejemplo:
	    1 5 3 el 3 es del medio
	    5 1 5 no hay número del medio
	    3 5 1 el 3 es del medio
	    3 1 5 el 3 es del medio
	    5 3 1 el 3 es del medio
	    */

	    /*int primerValor;
	    int segundoValor;
	    int tercerValor;
	    int numDelMedio;

	    printf("ingrese un numero ");
	    scanf("%d", &primerValor);

	    printf("ingrese un segundo numero ");
	    scanf("%d", &segundoValor);

	    printf("ingrese un tercer numero ");
	    scanf("%d", &tercerValor);


		if(primerValor!=segundoValor && primerValor!=tercerValor && segundoValor!=tercerValor)
		{
			if(primerValor>segundoValor && primerValor<tercerValor || primerValor>tercerValor && primerValor<segundoValor)
			{
				numDelMedio=primerValor;
			}
			else if(segundoValor>primerValor && segundoValor<tercerValor || segundoValor>tercerValor && segundoValor<primerValor)
			{
				numDelMedio=segundoValor;
			}
			else
			{
				numDelMedio=tercerValor;
			}
			printf("el numero del medio es: %d", numDelMedio);
		}
		else
		{
			printf("no hay numero del medio");
		}*/


	/*int numero;
	int total;
	float promedio;
	int i;


	total = 0;

	for(i=0; i<7; i++)
	{
		do{
			printf("ingrese un numero menor a 0: ");
			fflush(stdin);
			scanf("%d", &numero);
		}while(numero>0);
    	total += numero;
	}


	promedio = (float)total / 7;

	printf("el promedio de los numeros negativos es de: %.2f", promedio);*/



		/*int numeros;
		char respuesta;
		int maximoNegativos;
		int minimoPositivos;
		float promedioPositivos;
		float promedioNegativos;
		int banderaPositivo;
		int banderaNegativo;
		int contadorPositivos;
		int contadorNegativos;

		banderaPositivo = 0;
		banderaNegativo = 0;
		promedioNegativos=0;
		promedioPositivos=0;
		contadorPositivos = 0;
		contadorNegativos = 0;


		do{

			printf("ingrese un numero entero ");
			fflush(stdin);
			scanf("%d", &numeros);

			if(numeros>0)
			{
				contadorPositivos++;
			}
			if(numeros<0)
			{
				contadorNegativos++;
			}

			if(banderaPositivo == 0 && numeros>0)
			{
				minimoPositivos = numeros;
				banderaPositivo = 1;
			}
			else
			{
				if(numeros>0)
				{
					if(numeros<minimoPositivos)
					{
						minimoPositivos = numeros;
					}
				}
			}

			if(banderaNegativo == 0 && numeros<0)
			{
				maximoNegativos = numeros;
				banderaNegativo = 1;
			}
			else
			{
				if(numeros>maximoNegativos)
				{
					maximoNegativos = numeros;
				}
			}

			if(numeros>0)
			{
			promedioPositivos += numeros;
			}
			else
			{
			promedioNegativos += numeros;
			}




			printf("desea seguir ingresando numeros? s/n ");
			fflush(stdin);
			scanf("%c", &respuesta);
		}while(respuesta == 's');

		promedioPositivos = promedioPositivos/contadorPositivos;
		promedioNegativos = promedioNegativos/contadorNegativos;



		if(promedioPositivos>0)
		{
			printf("el promedio de los numeros positivos es: %.2f \n", promedioPositivos);
			printf("el minimo de los positivos es: %d ", minimoPositivos);
		}
		if(promedioNegativos<0)
		{
			printf("\nel promedio de los numeros negativos es: %.2f \n", promedioNegativos);
			printf("el maximo de los negativos es: %d", maximoNegativos);
		}*/


		/*int numero;

		printf("ingrese un numero ");
		scanf("%d", &numero);


		if(numero%2==0)
		{
			printf("el numero %d es un numero par", numero);
		}
		else
		{
			printf("el numero %d no es un numero par", numero);
		}*/

		int numero;
		int menorNumero;
		int banderaMinimo;
		int i;
		int mayorNumPar;
		int banderaNumPar;
		int numeroNegativo;
		int mayorNumero;
		int lugarIngresado;
		int banderaMayorNumero;


		banderaMinimo = 0;
		banderaNumPar = 0;
		numeroNegativo = 1;
		banderaMayorNumero = 0;

		for(i=0; i<8;i++)
		{
			printf("ingrese un numero distinto de cero: ");
			scanf("%d", &numero);


			if(numero<menorNumero || banderaMinimo == 0)
			{
				menorNumero = numero;
				banderaMinimo = 1;
			}

			if(numero%2==0)
			{
				if(numero>mayorNumPar || banderaNumPar==0)
				{
					mayorNumPar = numero;
					banderaNumPar = 1;
				}
			}

			if(numero<0)
			{
				numeroNegativo *= numero;
			}

			if(numero>mayorNumero || banderaMayorNumero==0)
			{
				mayorNumero = numero;
				banderaMayorNumero = 1;
				lugarIngresado = i+1;
			}


		}


		printf("el numero mas chico ingresado es el: %d", menorNumero);
		printf("\nde los numeros pares ingresados, el mayor es: %d", mayorNumPar);
		printf("\nel producto total de los negativos es: %d", numeroNegativo);
		printf("\n el mayor numero es: %d y se ingreso en la posicion %d ", mayorNumero, lugarIngresado);



	return 0;

}
