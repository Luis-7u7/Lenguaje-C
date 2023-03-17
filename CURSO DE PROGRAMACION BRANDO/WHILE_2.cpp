#include <stdio.h>

int main(){
	
	//programa que se detenga hasta que el usuario ingresa una x
	
	char letra = '\0';
	
	while(letra != 'x'){
		scanf("%c", &letra);
	}
	
	printf("FIN DEL PROGRAMA");
	
	
	return 0;
}
