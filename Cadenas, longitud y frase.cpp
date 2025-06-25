#include <stdio.h>
#include <string.h>

#define MAX 300 // Tama?o m?ximo para las frases combinadas
#define FRASE 100 // Tama?o m?ximo para cada frase

int main() {
	char input[MAX]; // Cadena para las frases ingresadas juntas
	char frases[3][FRASE]; // Para almacenar cada frase separada
	char temp[FRASE]; // Variable para intercambiar frases durante la ordenaci?n
	int i, j;
	
	// Pedir al usuario las 3 frases juntas separadas por punto y coma (;)
	printf("Ingrese las 3 frases juntas, separadas por punto y coma (;):\n");
	fgets(input, MAX, stdin);
	
	// Eliminar el salto de l?nea al final
	input[strcspn(input, "\n")] = '\0';
	
	// Separar las frases usando strtok
	char *token = strtok(input, ";");
	i = 0;
	while (token != NULL && i < 3) {
		strcpy(frases[i], token);
		token = strtok(NULL, ";");
		i++;
	}
	
	// Ordenar las frases por longitud de mayor a menor
	for (i = 0; i < 2; i++) {
		for (j = i + 1; j < 3; j++) {
			if (strlen(frases[i]) < strlen(frases[j])) {
				strcpy(temp, frases[i]);
				strcpy(frases[i], frases[j]);
				strcpy(frases[j], temp);
			}
		}
	}
	
	// Mostrar las frases ordenadas
	printf("\nFrases ordenadas de mayor a menor cantidad de caracteres:\n");
	for (i = 0; i < 3; i++) {
		printf("%s\n", frases[i]);
	}
	
	return 0;
}


