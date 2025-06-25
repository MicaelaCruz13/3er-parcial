#include <stdio.h>
#include <string.h>

#define MAX_CADENA 100

int main() {
	char s1[MAX_CADENA], s2[MAX_CADENA], resultado[MAX_CADENA * 2];
	
	printf("Ingrese la primera cadena (s1): ");
	fgets(s1, MAX_CADENA, stdin);
	s1[strcspn(s1, "\n")] = 0;
	
	printf("Ingrese la segunda cadena (s2): ");
	fgets(s2, MAX_CADENA, stdin);
	s2[strcspn(s2, "\n")] = 0; 
	
	
	printf("\nCadena 1: %s\n", s1);
	printf("Cadena 2: %s\n", s2);
	
	char *masLarga, *masCorta;
	if (strlen(s1) >= strlen(s2)) {
		masLarga = s1;
		masCorta = s2;
	} else {
		masLarga = s2;
		masCorta = s1;
	}
	
	printf("\nLa cadena m?s larga es: %s\n", masLarga);
	
	
	strcpy(resultado, masCorta);
	strcat(resultado, " "); 
	strcat(resultado, masLarga);
	
	printf("\nConcatenaci?n (m?s corta + espacio + m?s larga): %s\n", resultado);
	
	return 0;
}
