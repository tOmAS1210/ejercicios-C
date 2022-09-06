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
#define I 2

int main(void) {

	setbuf(stdout,NULL);

	/*

	 se ingresan 10 numeros y 10 letras.
	se necesita saber:
	a) promedio de numeros
	b) cantidad de vocales (cuantas a, cuantas b....)
	c) de la letra a, el valor mas grande
	d) el factor de todos los numeros ingresados

	int numero;
	char letra;
	int i;
	float promedioNumeros;
	int contadorA;
	int contadorE;
	int contadorI;
	int contadorO;
	int contadorU;
	int maximoNumero;
	int factor;

	promedioNumeros = 0;

	contadorA = 0;
	contadorE = 0;
	contadorI = 0;
	contadorO = 0;
	contadorU = 0;

	factor = 1;

	for(i=0; i<I; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d", &numero);

		printf("ingrese una letra: ");
		fflush(stdin);
		scanf("%c", &letra);

		switch(letra)
		{
		case 'a':
			contadorA++;
			if(numero>maximoNumero || contadorA==1)
			{
				maximoNumero = numero;

			}
			break;
		case 'e':
			contadorE++;
			break;
		case 'i':
			contadorI++;
			break;
		case 'o':
			contadorO++;
			break;
		case ' u':
			contadorU++;
			break;
		}

		promedioNumeros += numero;
		factor = factor * numero;


	}

	promedioNumeros = promedioNumeros/(float)I;

	printf("el promedio de los numeros es: %.2f", promedioNumeros);

	printf("se ingresaron: %d letras a\n", contadorA);
	printf("se ingresaron: %d letras e\n", contadorE);
	printf("se ingresaron: %d letras i\n", contadorI);
	printf("se ingresaron: %d letras o\n", contadorO);
	printf("se ingresaron: %d letras u\n", contadorU);
	if(contadorA>0)
	{
	printf("el numero maximo de a es: %d \n", maximoNumero);
	}
	else
	{
		printf("no se ingreso ninguna letra A para calcular el maximo\n");
	}
	printf("\n el factor es: %d", factor);*/


	/*
	1.  Se ingresan 5 importes,
	y pais de origen ('C' para China, 'U' para Uruguay o 'P' para Paraguay).
	Calcular y mostrar:
	a.  Mínimo importe con su pais
	c.  Promedio importe
	d.  Cantidad de productos de China (c)
	e.  Sobre el mínimo encontrado aplicar un descuento del 10% a dicho importe.
	*/
	int importe;
	char pais;
	int i;
	int importeMinimo;
	int banderaImporte;
	char paisImporteMinimo;
	float promedioImporte;
	int cantidadProductosChina;
	float descuentoImporte;
	int descuento;

	importeMinimo = 0;
	banderaImporte = 0;
	paisImporteMinimo = 0;
	promedioImporte = 0;
	cantidadProductosChina = 0;


	for(i=0; i<5; i++)
	{
		printf("ingrese el importe: ");
		scanf("%d",&importe);

		printf("ingrese el pais de origen: c/u/p (china,uruguay,paraguay)");
		fflush(stdin);
		scanf("%c",&pais);

		if(importe<importeMinimo || banderaImporte==0)
		{
			importeMinimo = importe;
			banderaImporte = 1;
			paisImporteMinimo = pais;
		}

		promedioImporte += importe;

		if(pais=='c')
		{
			cantidadProductosChina++;
		}



	}

	promedioImporte = promedioImporte/i;

	descuento = (importeMinimo*10)/100;


	descuentoImporte = importeMinimo - descuento;


	printf("el importe minimo ingresado es: %d y el pais es: %c", importeMinimo, paisImporteMinimo);
	printf("\n el promedio de los importes es: %.2f", promedioImporte);
	printf("\n la cantidad de productos de china son: %d", cantidadProductosChina);
	printf("\n al aplicarle el descuento del 10 por ciento al minimo, quedo: %.2f", descuentoImporte);

	return 0;
}
