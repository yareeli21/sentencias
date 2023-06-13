#include"stdio.h"

int main(){

  //prueba de divisibilidad

	int a, b;

	printf("Digite 2 numeros: ");
	scanf("%d %d", &a, &b);

	if(a%b == 0)
		printf("%d es divisible entre %d",a,b);

	return 0;
}