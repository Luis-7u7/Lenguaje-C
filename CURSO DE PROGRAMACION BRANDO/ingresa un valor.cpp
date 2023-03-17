#include <stdio.h>

int main (){
	
	//declarar la variable del dato ingresado
	int numero = 0;
	
	//solicitar el valor mediante la funcion 'scanf'
	//siempre agrega el '&' al nombre de la variable (solo en la funcion scanf)
	scanf("%i",&numero);
	
	//mostrar el valor de la variable para ver si lo guardo bien
	printf("La variable numero es %i", numero);
	
	float x = 0;
	printf("\ningresa un numero decimal: ");
	scanf("%f", &x);
	printf("La variable es %f", x);
	
	return 0;
}
