/*
 * hola-mundo.c
 *
 *  Created on: 17/8/2015
 *      Author: Vero
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	char buffer[80];

	int i;
	char texto[256];

	printf("Hola mundo!\n");

	for(i = 0; i <= 15; i++){
		printf("El número de iteración es: %d\n", i);
	}

	scanf("%s", buffer);
	printf("Contenido del buffer: %s", buffer);

	printf("Escribi algo:\n");
	fgets(texto, 256, stdin);
	printf("El texto ingresado es: %s\n", texto);

	
	printf("Modificado desde la web\n");

	getchar();
	printf("Modificado desde la web para hacer merge en Eclipse\n");
	
 	printf("Cambio para hacer merge Eclipse\n");


	return EXIT_SUCCESS;
}
