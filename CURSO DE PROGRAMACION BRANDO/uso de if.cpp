#include <stdio.h>

int main(){
	
	 //uso de la sentencia de control 'if'
  
  int edad = 0;
  printf("Bienvenido a la puri");
  printf("\nIngresa tu edad: ");
  scanf("%i", &edad);
  
  if(edad>=18){
  	//si la condicion es verdadera se ejecuta dentro de las llaves
  	printf("Adelante puedes pasar");
  }
  else if (edad==17){
  	printf("Si me das $50, pasas.");
  }
  else{
  	printf("Largo de aqui");
  }
	
	
	
	return 0;
}


