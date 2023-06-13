#include"stdio.h"

int main(){

 float nota;
 printf("Digite la nota que obtuvo: ");
 scanf("%f",&nota);

 if(nota >5)
 	puts("APROBADO");
 else 
 	puts("REPROBADO");


	return 0;
}