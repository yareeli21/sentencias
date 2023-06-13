#include<stdio.h>
#include<math.h>

int main(){

 float x, ex;

 printf("Digite un numero: ");
 scanf("%f",&x);

 if(x <= 0){
 	ex = pow(x,2) - x;
 }
else 
	ex= -pow(x,2) + 3*x;
//después de las sentencias se imprimirá el valor de función dependiendo qué número se digitó
printf("f(%.1f) = %.3f",x,ex);
	return 0;
}