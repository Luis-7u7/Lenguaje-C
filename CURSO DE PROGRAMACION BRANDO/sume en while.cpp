#include<stdio.h>

int main(){
	
	//programa que se detenga hasta que el usuaria ingrese un numero negativo
	//sume todos los valores ingresados anteriormente
	int numero = 0;
	//variable contador
	int contador = 0;
	while (numero>=0){
			contador = contador + numero;
		scanf("%i", &numero);
	}
	printf("La suma de los numeros ingresados es %i\n", contador);
	printf("Fin del programa.");
	
	
	return 0;
}
