#include <stdio.h>

int main() {
	int numero;
	FILE *archivo;
	
	// Pedir n�mero al usuario
	printf("Ingrese un n�mero entero: ");
	scanf("%d", &numero);
	
	// Guardar el n�mero en el archivo
	archivo = fopen("numero.txt", "w");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo para escritura.\n");
		return 1;
	}
	fprintf(archivo, "%d", numero);
	fclose(archivo);
	
	// Leer el n�mero del archivo
	archivo = fopen("numero.txt", "r");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo para lectura.\n");
		return 1;
	}
	fscanf(archivo, "%d", &numero);
	fclose(archivo);
	
	// Mostrar el n�mero
	printf("El n�mero le�do del archivo es: %d\n", numero);
	
	return 0;
}
