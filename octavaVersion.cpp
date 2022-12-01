//en la octava version, cambio el codigo y según yo lo mejoro
#include<stdio.h>
#include<math.h>

int main() {
	int eleccion;
	int gradoMax;
	int polinomio[20];
	int valorX;
	int res = 0;
	printf("\n\tCalculadora de polinomios\n\n");
	printf("\n\tEn el siguiente menu elija la opcion que quiera:\n\n");
	printf("\n\t1- Introducir el polinomio y evaluarlo\n");
	printf("\n\t2- Multiplicar 2 polinomios\n");
	printf("\n\t3- Dividir 2 polinomios\n");
	printf("\n\teleccion: ");
	scanf_s("%i", &eleccion);
	switch (eleccion)
	{
	case 1:printf("\n\tHas elegido la opcion %i", eleccion);
		printf("\n\n\tcual es el grado maximo del polinomio?: ");
		scanf_s("%i", &gradoMax);
		printf("\n\tque coeficiente tiene el monomio?");
		printf("\n");
		for (int i = 0; i < gradoMax + 1; i++) {
			printf("\n\tX^%i tiene: ", i);
			scanf_s("%i", &polinomio[i]);
		}
		printf("\n\t");
		for (int i = 0; i < gradoMax + 1; i++) {
			printf("(%ix^%i)+", polinomio[i], i);
		}
	}
}