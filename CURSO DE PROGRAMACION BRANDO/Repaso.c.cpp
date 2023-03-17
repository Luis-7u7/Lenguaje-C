#include <iostream>
using namespace std;
#include <stdlib.h>

struct Alumno{
    int grado;
    int edad;
    //sting nombre; en lugar de string usamos arreglo de caracteres
    char nombre[50];
	char matricula[20];
    float calificaciones[4];
    float promedio;
};

void mostrarAlumnos(Alumno *mis_alumnos, int x){
	
	for(int j=0; j<x; j++){
		printf("\n***Datos del alumno %i***", j+1);
	    printf("\nEdad: %i", mis_alumnos[j].edad);
	    cout<<"\nNombre: "<<mis_alumnos[j].nombre;
	    printf("\ningresa tu grado: %i", mis_alumnos[j].grado);
	    printf("\nIngresa tu matricula: %s", mis_alumnos[j].matricula);
	    printf("\ningresa tu grado: %i", mis_alumnos[j].grado);
		for(int i=0; i<4; i++){
	    	printf("\nCalificacion %i: ", i+1);
	    	cout<<mis_alumnos[j].calificaciones[i];
		}
		printf("\nPromedio: %f", mis_alumnos[j].promedio);		
	}
}

void ingresarDatos(Alumno *mis_alumnos, int x){

    for(int j=0; j<x; j++){
    	
    	printf("Alumno %i", j+1);
    	
		printf("\nIngresa tu edad: ");
	    scanf("%i", &mis_alumnos[j].edad);
	    
	    printf("Ingresa tu nombre: ");
	    cin>>mis_alumnos[j].nombre;
	    
	    printf("Ingresa tu matricula: ");
	    cin>>mis_alumnos[j].matricula;
	    
	    printf("Ingresa tu grado: ");
	    cin>>mis_alumnos[j].grado;
	    
	    for(int i=0; i<4; i++){
	    	printf("Ingresa calificacion %i: ", i+1);
	    	cin>>mis_alumnos[j].calificaciones[i];
		}
		
		float suma = 0;
		for(int i=0; i<4; i++){
			suma = mis_alumnos[j].calificaciones[i] + suma;
		}
		
		mis_alumnos[j].promedio = suma / 4;
		
	}	
	
	
}

int main(){
	
	printf("Ingresa el numero de alumnos: ");
	int x;
	scanf("%i", &x);

    Alumno *mis_alumnos;
    mis_alumnos = (Alumno*) malloc(sizeof(Alumno)*x);

    ingresarDatos(mis_alumnos,x);
	mostrarAlumnos(mis_alumnos,x);

    return 0;
}
