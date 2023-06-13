#include<stdio.h>
// se busca calcular el número mayor de dos números leídos en el teclado, y visualizarlos en pantalla
int main(){

  int x, y;
  printf("INtroduzca dos digitoss: ");
  scanf("%d %d", &x, &y);

  if(x>y)
  	printf("%d es mayor", x);
  else
  	printf("%d es mayor", y);

	return 0;
}