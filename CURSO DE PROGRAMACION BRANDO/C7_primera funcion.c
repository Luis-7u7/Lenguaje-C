#include <stdio.h>

//Funcion con entrada y con salida

//primero el tipo de dato que sale de la funcion
//nombre de tu funcion
//dentro de los parentesis el tipo de dato que entra y un nombre para esa variable
//dentro de las llaves ponemos los procesos
int por5(int numero){
	return numero * 5;
}



int main(){
	
	int dato = 0;
	printf("Ingresa un dato: ");
	scanf("%i", &dato);
	
	
	//hay que hacer el llamado a la funcion
	int resultado = por5(dato);
	
	printf("\n%i", resultado);
	
	
	return 0;
}
