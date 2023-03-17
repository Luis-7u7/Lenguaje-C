#include <stdio.h>
#include <math.h>

int main(){
	
	float x1,x2,y1,y2 = 0;
	
	//programa que calcula la distancia entre dos puntos
	printf("Ingresa la cordenada x del primer punto: ");
	scanf("%f", &x1);
	
	printf("Ingresa la cordenada y del primer punto: ");
	scanf("%f", &y1);
	
	printf("Ingresa la cordenada x del segundo punto: ");
	scanf("%f", &x2);
	
	printf("Ingresa la cordenada y del segundo punto: ");
	scanf("%f", &y2);
	
	float r1 = x2-x1;
	float r2 = y2-y1;
	float p1 = pow(r1,2);
	float p2 = pow(r2,2);
	float s1 = p1 + p2;
	float raiz = sqrt (s1);
	
	printf("La distancia entre los puntos es: %f", raiz);
	return 0;
}
