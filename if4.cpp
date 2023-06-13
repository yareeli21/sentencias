/*visualizar la tarifa que será la tasa de la luz según el gasto de corriente eléctrica. 
Para un gasto menor de 1000 kwh la tarifa es 1.2, entre 1000 y 1850 kwh es 1.0 u mayor de 1850 kwh, 0.9*/
 #include<stdio.h>
#define TARIFA 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9
 int main(){

  float gasto, tasa;
  printf("Digite el gasto que hubo este mes: ");
  scanf("%f",&gasto);

  if(gasto < 1000.0)
  	tasa=TARIFA;
  if(gasto>=1000.0 && gasto<=1850.0)
  	tasa=TARIFA2;
  if(gasto > 1850.0)
  	tasa=TARIFA3;

  printf("De acuero al gasto introducido % .1f kwxh su tasa es: %f",gasto, tasa);


 	return 0;
 }