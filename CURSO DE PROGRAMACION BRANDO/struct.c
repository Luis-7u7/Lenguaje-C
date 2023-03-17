#include <stdio.h>

struct Producto{
	float precio;
	int codigo;
};

int main(){
	
	struct Producto ps5;
	
	printf("%f", ps5.precio);
	printf("\n%d", ps5.codigo);
	
	ps5.precio = 12599;
	ps5.codigo = 1;
	
	printf("\n%f", ps5.precio);
	printf("\n%i", ps5.codigo);
	
	return 0;
}
