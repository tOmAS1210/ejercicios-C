/*
 ============================================================================
 Name        : Menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	int elegir;
	int bandera1;
	int bandera2;
	char confirmar;

	bandera1 = 0;
	bandera2 = 0;
	confirmar = 's';

	do{
		printf("1) iniciar\n"
				"2) procesar\n"
				"3) finalizar\n"
				"4) salir\n");//hola
		printf("\ningrese una opción: ");
		scanf("%d", &elegir);

		switch(elegir)
		{
		case 1:
			printf("el programa se está iniciando\n");
			bandera1 = 1;
			break;
		case 2:
			if(bandera1==0)
			{
				printf("no inicio el programa\n");
			}
			else
			{
				printf("procesando\n");
				bandera2 = 1;
			}
			break;
		case 3:
			if(bandera2==1)
			{
				printf("finalizando\n");

			}
			else
			{
				if(bandera2==0)
				{
					printf("falta procesar\n");
				}
				else if(bandera1==0)
				{
					printf("falta iniciar\n");
				}
			}
			break;
		case 4:
			if(bandera1==1 && bandera2==1)
			{
				printf("saliendo");
				printf("\ndesea volver a iniciar) s/n ");
				fflush(stdin);
				scanf("%c", &confirmar);
				bandera1 = 0;
				bandera2 = 0;
			}

		}

	}while(confirmar=='s');



	return EXIT_SUCCESS;
}
