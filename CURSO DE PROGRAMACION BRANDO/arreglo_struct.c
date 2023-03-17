#include <stdio.h>
#include <stdlib.h>

typedef struct{//Agrupar varias variables en un solo tipo de dato
	float precio;
	int codigo;
	
}Producto;//nuevo tipo de dato: struct Producto

int main(){

	//Forma correcta de crear un arreglo de estructuras 
	//tener la estructura 
	//crear un puntero
	//asignar al puntero la memoria dinamica
	int n = 3; //cuantos productos vas a necesitar
	Producto *p; //puntero de tipo struct Producto
	
	p = (Producto *) malloc(sizeof(Producto)*n); //creando arreglo de tamaño n de tipo producto
	
	int i;
	for(i=0; i<n; i++){
		printf("Producto %i", i+1);
		printf("\nIngresa precio: ");
		scanf("%f", &p[i].precio);
		printf("Ingresa codigo: ");
		scanf("%d", &p[i].codigo);
	}
	
	printf("\n******DATOS INGRESADOS*******\n");
	int j;
	for(j=0; j<n; j++){
		printf("\nProducto %i", j+1);
		printf("\nPrecio: %f", p[j].precio);
		printf("\nCodigo: %d", p[j].codigo);
	}
	
	
	return 0;
}
