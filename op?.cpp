#include"stdio.h"

int main(){
 //aquí se usará el operador para asignar el menor de dos valores de entrada a menor.
	int menor, entrada1, entrada2;
    scanf("%d %d",&entrada1, &entrada2);

    menor= entrada1 <= entrada2 ? entrada1 : entrada2;

    printf("%d",menor);

	return 0;
}