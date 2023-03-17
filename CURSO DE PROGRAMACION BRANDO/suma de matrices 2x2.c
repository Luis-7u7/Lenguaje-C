#include <stdio.h>

int main(){
	
	int largo = 0; 
	int ancho = 0;
	
	printf("Ingresa el largo de las matrices: ");
	scanf("%i", &largo); 
	
	printf("Ingresa el ancho de las matrices: ");
	scanf("%i", &ancho); 
	
	//programa que sume dos matrices
	int a[largo][ancho];
	int b[largo][ancho];
	
	int i;
	int j;
	
	for(i=0; i<largo; i++){//for para el largo
		for(j=0; j<ancho; j++){//for para el ancho
			printf("Ingresa el valor de a: ");
			scanf("%i", &a[i][j]);
		}
	}
	
	for(i=0; i<largo; i++){//for para el largo
		for(j=0; j<ancho; j++){//for para el ancho
			printf("Ingresa el valor de b: ");
			scanf("%i", &b[i][j]);
		}
	}
	
	//operacion suma de matrices
	int suma[largo][ancho];
	for(i=0; i<largo; i++){//for para el largo
		for(j=0; j<ancho; j++){//for para el ancho
			suma [i][j] = a[i][j] + b[i][j]; 
		}
	}	
	
	printf("\n\nMatriz A:\n");
	//operacion para mostrar matriz A
	for(i=0; i<largo; i++){//for para el largo
		printf("|");
		for(j=0; j<ancho; j++){//for para el ancho
			printf("%i ", a[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n\nMatriz B:\n");
	//operacion para mostrar matriz B
	for(i=0; i<largo; i++){//for para el largo
		printf("|");
		for(j=0; j<ancho; j++){//for para el ancho
			printf("%i ", b[i][j]);
		}
		printf("|\n");
	}
	
	printf("\n\nSuma:\n");
	//operacion para mostrar suma
	for(i=0; i<largo; i++){//for para el largo
		printf("|");
		for(j=0; j<ancho; j++){//for para el ancho
			printf("%i ", suma[i][j]);
		}
		printf("|\n");
	}
	
	
	return 0; 
}
