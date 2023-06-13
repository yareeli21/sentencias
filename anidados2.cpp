#include<stdio.h>
//se busca saber cuál es el mayor de 3 enteros introducidos
int main(){
  
  int a,b,c,mayor;

  printf("Digite 3 enteros: ");
  scanf("%d %d %d",&a,&b,&c);

  if(a>b)
  	if(a>c) 
  		mayor=a;
  	else mayor=c;
  else if (b>c)
  	   mayor=b;
  	else
  		mayor=c;

  	printf("%d es el mayor",mayor);

	return 0;
}