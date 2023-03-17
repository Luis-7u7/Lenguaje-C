#include <stdio.h>

int main(){
	
	//programa que con base a tu edad te recomiende una serie
	
	int edad = 0;
	printf("vienvenido al recomendador de series");
	printf("\nIngresa tu edad: ");
	scanf("%i", &edad);
	fflush( stdin );//funcion que limpia el buffer
	
	char genero = '\0';
	printf("\ningresa tu genero, M masculino F femenino: ");
	scanf("%c", &genero);
	
	if(edad >= 0 && edad <=10){
		if(genero=='M' || genero=='m'){
			printf("te recomiendo ver Tom y Jerry");
		}
		else if (genero== 'F'){
			printf("te recomiendo ver las chicas superpoderosas");
		}
		else{
			printf("ingresaste un genero erroneo");
		}
	}
	else if(edad >= 11 && edad <= 20){
			if(genero=='M'){
			printf("te recomiendo ver un partido de football");
		}
		else{
			printf("te recomiendo ver un documental");
		}
	}
	else if(edad >=21 && edad <= 30){
		printf("te recomiendo la serie breaking bad");
	}
	else if(edad >=31 && edad <=40){
		printf("te recomiendo la series Dark");
	}
	else{
		printf("te recomiendo ver doctor house");
	} 
	
	return 0;
}
