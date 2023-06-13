#include"stdio.h"

int  main(){

  int tipo_vehiculo, peaje;

  printf("Digite el tipo de vehiculo: ");
  scanf("%d",&tipo_vehiculo);

  switch(tipo_vehiculo)
  {
   case 1:
   printf("turismo\n");
   peaje=500;
   printf("%d de peaje",peaje);
   break;

   case 2:
   printf("autobus\n");
   peaje=3000;
   printf("%d de peaje",peaje);
   break;

   case 3:
   printf("motocicleta\n");
   peaje=300;
   printf("%d de peaje",peaje);
   break;

   default:
   printf("vehiculo no autorizado\n");

  }


	return 0;
}