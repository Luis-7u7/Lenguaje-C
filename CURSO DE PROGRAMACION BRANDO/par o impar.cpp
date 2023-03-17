#include <stdio.h>

int main(){
	
	int numero = 0;
	printf("dame un numero: ");
	scanf("%i", &numero);
	
	if(numero%2 == 1){
		printf("numero impar");
	}
	else{
		printf("numero par");
	}
	
	return 0;
}

