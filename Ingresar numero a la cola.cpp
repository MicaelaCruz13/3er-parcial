#include <stdio.h>
#include <stdlib.h>

// Estructura de un nodo para la cola
struct Nodo {
	int dato;
	struct Nodo* siguiente;
};

// Estructura de la cola
struct Cola {
	struct Nodo* frente;
	struct Nodo* final;
};

// Funci?n para inicializar una cola vac?a
void inicializarCola(struct Cola* cola) {
	cola->frente = NULL;
	cola->final = NULL;
}

// Funci?n para insertar en la cola (enqueue)
void enqueue(struct Cola* cola, int valor) {
	struct Nodo* nuevo = (struct Nodo*) malloc(sizeof(struct Nodo));
	if (nuevo == NULL) {
		printf("Error: No se pudo asignar memoria.\n");
		exit(1);
	}
	nuevo->dato = valor;
	nuevo->siguiente = NULL;
	
	if (cola->final == NULL) {
		cola->frente = nuevo;
		cola->final = nuevo;
	} else {
		cola->final->siguiente = nuevo;
		cola->final = nuevo;
	}
}

// Funci?n para mostrar la cola completa
void mostrarCola(struct Cola* cola) {
	struct Nodo* actual = cola->frente;
	if (actual == NULL) {
		printf("La cola est? vac?a.\n");
		return;
	}
	printf("Contenido de la cola: ");
	while (actual != NULL) {
		printf("%d -> ", actual->dato);
		actual = actual->siguiente;
	}
	printf("NULL\n");
}

int main() {
	struct Cola cola;
	inicializarCola(&cola);
	int valor;
	
	// Insertar tres valores ingresados por el usuario
	for (int i = 0; i < 3; i++) {
		printf("Ingrese un n?mero para la cola: ");
		scanf("%d", &valor);
		enqueue(&cola, valor);
	}
	
	// Mostrar la cola completa
	mostrarCola(&cola);
	
	return 0;
}
