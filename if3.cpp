#include"stdio.h"

int main(){

   //comparar número introducido por el usuario, si es positivo o es negativo
	int x;
	printf("Digite un numero: ");
	scanf("%d",&x);

   if(x > 0)
   	printf("%d es un numero positivo",x);
   if(x < 0)
   	printf("%d es un numero negativo",x);
   if(x == 0)
   	printf("%d es cero",x);

	return 0;
}