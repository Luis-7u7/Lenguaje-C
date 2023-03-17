// obtener la hipotenusa de un triangulo rectangulo, 
//pidiendo al usuario el valor de dos catetos

#include <stdio.h>
#include <math.h>

int main(){
	
	float hipotenusa, cat1, cat2 = 0;
	
	printf("Ingresa el valor del primer cateto: ");
	scanf("%f", &cat1);
	
	printf("Ingresa el valor del segundo cateto: ");
	scanf("%f", &cat2);
	
	float a = pow(cat1,2);
	float b = pow(cat2,2);
	float suma = a + b;
	float raiz = sqrt(suma);
	
	printf("La hipotenusa del triangulo rectangulo es: %.0f", raiz);
	
	return 0;
}
