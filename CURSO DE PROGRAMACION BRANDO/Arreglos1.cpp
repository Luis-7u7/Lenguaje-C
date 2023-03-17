#include <stdio.h>

int main(){
	
	char name[20];
	int age;
	float height;
	char rfc[14];
	
	printf("Ingresa tu nombre: ");
	scanf("%s", &name);
	
	printf("\nIngresa tu edad:");
	scanf("%i", &age);
	
	printf("\nIngresa tu estatura: ");
	scanf("%f", &height);
	
	printf("\nIngresa tu RFC: ");
	scanf("%s", &rfc);
	
	printf("NOMBRE\t EDAD\t ESTATURA\t RFC");
	printf("\n -----------------------------------------------");
	printf("\n%s\t %i\t %.2f\t %s", name, age, height, rfc);

	return 0;
}
