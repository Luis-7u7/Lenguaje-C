#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//Haciendo uso de arreglos, elaborar un programa que permita el ingreso de 5 calificaciens
	//calcule el promedio del alumno, y mostrar si el alumno es de excelencia,bueno o bajo.
	//Excelecia es de 10,9,8, bueno es de 6 y 7, bajo es de 0 a 5.
	
	float calificaciones[5];
	int i;
	
	for(i=0; i<5; i++){
		printf("Ingresa calificacion: ");
		scanf("%f", &calificaciones[i]);	
	}
	
	float acarreo = 0; 
	int j;
	for(j=0; j<5; j++){
		acarreo = acarreo + calificaciones[j];
	}
	
	float promedio = acarreo / 5;
	
	//validacion
	
	if(promedio<0 || promedio >10){
		printf("Ingresaste calificaciones fuera de rango");
		exit(-1);
	}
	
	printf("promedio: %.1f", promedio);
	
	if(promedio>=8 && promedio<=10){
		printf("\nAlumno de excelencia.");
	}
	else if(promedio>= 6 && promedio<=7){
		printf("\nAlumno bueno.");
	}
	else{
		printf("\nAlumno reprobado.");
	}
	
	return 0;
}
