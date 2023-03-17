#include <stdio.h>

int pedirSueldo(){
	int sueldo = 0;
	printf("Ingresa tu sueldo: ");
	scanf("%d", &sueldo);
	return sueldo;
}

float modificarSueldo(float sueldo){//mismo float fueldo que el de la linea 24
	float nuevoSueldo;
	if(sueldo<1000){
		nuevoSueldo = (sueldo * 0.15) + sueldo;
	}else{
		nuevoSueldo = (sueldo * 0.12) + sueldo;
	}
	return nuevoSueldo;
}


int main(){
	
	//crear variable sueldo y llamar a la funcion para pedirlo
	float sueldo = pedirSueldo();
	sueldo = modificarSueldo(sueldo);//primero se ejecuta lo de la derecha, lo modifica y 
	//lo regresa modificado
	printf("El nuevo sueldo: %.1f", sueldo);
	
	
	
	return 0;
}
