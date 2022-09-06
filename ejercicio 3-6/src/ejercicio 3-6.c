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
#include "funciones.h"

int main(void) {
	setbuf(stdout, NULL);

	int numeroPedido;
	int num = 0;

	numeroPedido = realizarDescuento(asignar(num));

	printf("el numero pedido es: %d", numeroPedido);

	return EXIT_SUCCESS;
}
