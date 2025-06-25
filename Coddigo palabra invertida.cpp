#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char palabra[MAX];
	char pila[MAX];
	int tope = -1; // ?ndice de la cima de la pila
	
	// Pedir la palabra al usuario
	printf("Ingrese una palabra: ");
	scanf("%s", palabra);
	
	// Apilar cada car?cter
	for (int i = 0; i < strlen(palabra); i++) {
		pila[++tope] = palabra[i];
	}
	
	// Desapilar e imprimir para invertir
	printf("Palabra invertida: ");
	while (tope >= 0) {
		printf("%c", pila[tope--]);
	}
	
	printf("\n");
	return 0;
}
