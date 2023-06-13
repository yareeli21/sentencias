#include<stdio.h>

int main(){

 float n;

 printf("Introduzca un numero positivo o negativo: ");
 scanf("%f",&n);

 //si es mayor que 0
 if(n>0)
 {
 	printf("%.2f es mayor que cero\n",n);
    puts("Pruebe de nuevo introduciendo un numero negativo.");
 }
else if(n<0)
{
	printf("%.2f es menor que cero\n",n);
	puts("Pruebe de nuevo introduciendo un numero positivo.");
}
else 
{
	printf("%.2f %s", n, "es igual a cero");
	puts("¿por que no intenta introduciendo otro numero?");
}
	return 0;
}