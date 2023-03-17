#include <stdio.h>

int main(){
	
	//Para declarar un apuntador se especifica el tipo de dato al que apunta, el operador "*",
	//y el nombre del apuntador.
	
	int *p;//apuntador a un dato de tipo int
	
	//asignacion del apuntador
	int x = 8;
	
	p = &x; //SE le asigna a 'p' la direccion de memoria de 'x'
	
	printf("%d\n", *p); //muestra el valor de la variable 'x'
	printf("\n%d", p);//direccion de la memoria donde esta guardado 'x'
	
	
	return 0;
}
