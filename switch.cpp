#include<stdio.h>

//se arrojará si depende la letra de calificación tiene una nota excelente, notable, aprobado, reprobado o no es posible tal nota
int main(){
 char nota;
 printf("Digite la letra correspondiente a la nota que obtuvo: ");
 scanf("%c",&nota);
 
 //en el switch se pone el nombre de la variable con la que se trabajará
 switch(nota)
 { //en cada case se pone entre comillas simples una letra, en caso de que trabajemos con números se pone solo el número
   case 'A': puts("Excelente, examen superado");
             break;
   case 'B': puts("Notable. Suficiente");
             break;
   case 'c': puts("Aprobado");
             break;
   case 'D': 
   case 'F': puts("Reprobado");
             break;
   default:
            puts("No es posible esa nota");
 }

puts("Final del programa");
	return 0;
}