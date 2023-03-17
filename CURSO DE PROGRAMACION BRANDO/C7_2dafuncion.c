#include <stdio.h>

//Funcion sin entrada y con salida

//primero el tipo de dato que sale de la funcion
//nombre de tu funcion
//dentro de los parentesis el tipo de dato que entra y un nombre para esa variable
//dentro de las llaves ponemos los procesos
int por5(int numero){
	return numero * 5;
}

int pedirDato(){
	int dato = 0;
	printf("Ingresa un dato: ");
	scanf("%i", &dato);
	return dato;
}

int main(){
	
	int x = pedirDato();
	//hay que hacer el llamado a la funcion
	int resultado = por5(x);
	
	printf("\n%i", resultado);
	
	
	return 0;
}
