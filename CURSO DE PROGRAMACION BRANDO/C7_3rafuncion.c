#include <stdio.h>

int suma(int, int);
int main(){
	
	int a = pedirDato();
	int b = pedirDato();
	
	int resultado = suma(a,b);
	printf("El resultado de la suma es: %d", resultado);
	
	
	return 0;
}

int suma(int a, int b){
	int resultado;
	resultado = a+b;
	return resultado;
}
int pedirDato(){
	int dato1 = 0;
	printf("ingresa un numeroA: ");
	scanf("%d", &dato1);
	return dato1;
}


