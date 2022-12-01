//En la septima versión terminé este programa con la libreria y terminando el switch 
#include<stdio.h>
#include<math.h>

int main() {
	int eleccion;
	float polinomio[12], valor;
	double resultado = 0;
	printf("\n\tCalculadora de polinomios\n\n");
	printf("\n\tEn el siguiente menu elija la opcion que quiera:\n\n");
	printf("\n\t1- Introducir el polinomio y evaluarlo\n");
	printf("\n\t2- Multiplicar 2 polinomios\n");
	printf("\n\t3- Dividir 2 polinomios\n");
	printf("\n\teleccion: ");
	scanf_s("%i", &eleccion);
	switch (eleccion) {
	case 1:for (int i = 0; i <= 12; i++)
	{
		printf("Introduzca el coeficiente del polinomio: x^%i\n", i);
		scanf_s("%f", &polinomio[i]);
	}
		  printf("Digite en que valor quiere valuar la funcion: \n");
		  scanf_s("%f", &valor);
		  for (int i = 0; i <= 12; i++)
		  {
			  resultado = resultado + (pow(valor, i) * polinomio[i]);
		  }
		  printf("El resultado es %lf", resultado);
		  break;
	case 2:
		break;
	case 3:
		break;
	}


}
