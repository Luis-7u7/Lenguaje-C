#include <stdio.h>

void cuadrado(int *p){//solo acepta punteros de tipo entero
	*p = *p * *p;
}

void pedirValor(int *p){
	printf("Ingrese un valor: ");
	scanf("%d", p);
}

int main(){
	
	int x;
	int *p;
	p = &x;
	
	pedirValor(p);
	
	printf("Valor original: %d", x);
	
	cuadrado(p);
	
	printf("\nValor despues de la funcion: %i", x);
	
	
	
	return 0;
}
