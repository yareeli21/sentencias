#include"stdio.h"
//programa con varios if 
int main(){

 int nota;
 printf("Digite su nota obtenida: ");
 scanf("%d",&nota);

 if(nota < 0 || nota >100){
 	printf("%d no es una nota valida",nota);
 	return '?';
 }
 if ((nota >= 90) && (nota <=100))
 	return 'A';
 if ((nota >= 80) && (nota < 90))
 	return 'B';
 if ((nota >= 70) && (nota < 80))
 	return 'C';
 if ((nota >= 60) && (nota < 70))
 	return 'D';
 if (nota < 60)
 	return 'F';


	return 0;
}