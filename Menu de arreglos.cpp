#include <stdio.h>

// Funci?n para intercambiar dos elementos
void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

// Ordenamiento burbuja
void bubbleSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

// Ordenamiento por selecci?n
void selectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int minIndex = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[minIndex]) {
				minIndex = j;
			}
		}
		swap(&arr[minIndex], &arr[i]);
	}
}

// Funci?n para imprimir el arreglo
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int n, choice;
	
	printf("Ingrese la cantidad de n?meros a ordenar: ");
	scanf("%d", &n);
	
	int arr [n];
	
	printf("Ingrese los n?meros:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("\nSeleccione el m?todo de ordenamiento:\n");
	printf("1. Burbuja\n");
	printf("2. Selecci?n\n");
	printf("Ingrese su opci?n: ");
	scanf("%d", &choice);
	
	switch (choice) {
	case 1:
		bubbleSort(arr, n);
		printf("\nArreglo ordenado con el m?todo burbuja:\n");
		break;
	case 2:
		selectionSort(arr, n);
		printf("\nArreglo ordenado con el m?todo de selecci?n:\n");
		break;
	default:
		printf("\nOpci?n no v?lida.\n");
		return 1;
	}
	
	printArray(arr, n);
	
	return 0;
}
