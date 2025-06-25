#include <stdio.h>

int main() {
	int numero;
	FILE *archivo;
	
	// Pedir número al usuario
	printf("Ingrese un número entero: ");
	scanf("%d", &numero);
	
	// Guardar el número en el archivo
	archivo = fopen("numero.txt", "w");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo para escritura.\n");
		return 1;
	}
	fprintf(archivo, "%d", numero);
	fclose(archivo);
	
	// Leer el número del archivo
	archivo = fopen("numero.txt", "r");
	if (archivo == NULL) {
		printf("No se pudo abrir el archivo para lectura.\n");
		return 1;
	}
	fscanf(archivo, "%d", &numero);
	fclose(archivo);
	
	// Mostrar el número
	printf("El número leído del archivo es: %d\n", numero);
	
	return 0;
}
