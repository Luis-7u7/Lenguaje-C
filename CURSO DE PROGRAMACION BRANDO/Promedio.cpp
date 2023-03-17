#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Haciendo uso de arreglos, elaborar un programa que permita el ingreso de 5 calificaciones y
	// calcule el promedio del alumno, y mostrar si el alumno es de excelencia, bueno y bajo
	//excelencia es de 10,9 y 8 bueno es de 6,7 y bajo 0 al 5
	
	float calificaciones[5];
	
	for (int i = 0; i<5; i++){
		printf("Ingresa calificacion: ");
		scanf("%f", &calificaciones[i]);
	}
	
	float acarreo = 0;
	for (int i=0; i<5; i++){
		acarreo = acarreo + calificaciones[i];
	}
	
	float promedio = acarreo / 5;
	
	//validacion
	if(promedio<0 or promedio>10){
		printf("Ingresaste calificaciones fuera del rango");
		exit(-1);
	}
	
	printf("Promedio: %.2f", promedio);

	if(promedio>= 8 and promedio<=10){
		printf("Alumno de excelencia");
	}
	else if(promedio>=6 and promedio<=7){
		printf("Alumno de buen nivel");
	}
	else{
		printf("Alumno reprobado");
	}
	
	
	
	return 0;
}
