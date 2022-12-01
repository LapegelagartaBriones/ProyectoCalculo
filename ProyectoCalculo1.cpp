//Primera version de programa, solamente quiero diseñar mi menú
#include<stdio.h>

int main() {

	int eleccion;
	printf("\n\tCalculadora de polinomios\n\n");
	printf("\n\tEn el siguiente menu elija la opcion que quiera:\n\n");
	printf("\n\t1- Introducir el polinomio y evaluarlo\n");
	printf("\n\t2- Multiplicar 2 polinomios\n");
	printf("\n\t3- Dividir 2 polinomios\n");
	printf("\n\teleccion: ");
	scanf_s("%i", &eleccion);
	printf("%i", eleccion);
}