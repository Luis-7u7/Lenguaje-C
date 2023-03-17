#include <stdio.h>

int main(){
	
	//programa que pida al usuario dos numeros enteros y que los muestre
	//la suma, la resta, la multiplicacion y la division de ellos
	
	float numero1 = 0;
	float numero2 = 0;
	
	printf("escribe el primer numero: ");
	scanf("%f", &numero1);
	
	printf("escribe el segundo numero: ");
	scanf("%f", &numero2);
	
	//realizar las operaciones
	float s = numero1 + numero2;
	float r = numero1 - numero2;
	float m = numero1 * numero2;
	float d = numero1 / numero2;
	
	printf("el resultado de la suma es %f", s);
	printf("\nel resultado de la resta es %f", r);
	printf("\nel resultado de la multiplicacion es %f", m);
	printf("\nel resultado de la division es %f", d);
	
	return 0;
}
