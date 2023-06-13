#include<stdio.h>
 //caso particular de switch donde se "apilan" varias expresiones dentro de una alternativa, básicamente es el orden y se trabaja con incrementos
int main(){
 
 int x, num_digs, num_blan, num_dis;
 char y;

  num_digs=0;
  num_blan=0;
  num_dis=0;
  printf("Digite un numero:");
  scanf("%d",x);
  printf("Digite algo: ");
  scanf("%c"&y);

  switch(x){

  case '0':case '1': case '2': case '3': case'4':
  case '5':case '6': case '7': case '8': case '9':
  num_digs++;
  break;
  case "a": case '\t': case '\n':
  num_blan++;
  default:
    num_dis++;
  }

	return 0;
}