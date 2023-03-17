#include <stdio.h>

int main(){
	
	//declarando un arreglo
	int calificaciones[8];
	
	//bucle para llenar un arreglo
	for(int i=0; i<8; i++){
		scanf("i", &calificaciones[i]);
	}
	
	//bucle para mostrar un arreglo
	for(int i = 0; i<8; i++){
		printf("\t%i", calificaciones[i]);
	}
	return 0;
}
