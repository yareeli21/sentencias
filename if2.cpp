#include<stdio.h>

int main(){

  float nota;
  printf("Digite la nota del alumno: ");
  scanf("%f",&nota);
// aquí se está poniendo la condición, de si es mayor o igual a 5 el valor introducido anteriormente
  if(nota >=5)
  	puts("Aprobado.");

	return 0;
}