#include"stdio.h"
 //en este programa se incrementan los contadores de números positivos, números negativos o ceros
int main(){

  int x, num_pos, num_neg, num_ceros;
  num_pos=0;
  num_neg=0;
  num_ceros=0; 

  printf("Digite un numero: ");
  scanf("%d",&x);

  if(x>0){
  	
    printf("%d",num_pos=num_pos+1);
  }
  else if(x<0){
  	num_neg += 1;
    printf("%d", num_neg);
  }
  else
  	num_ceros += 1;
    printf("%d", num_ceros);


	return 0;
}