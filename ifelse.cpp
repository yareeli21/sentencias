#include"stdio.h"
/* Si salario es mayor a 100 000 se calcula el salario neto restándole los impuetsos; en caso contrario
(else) el salario neto es igual al salario (bruto)*/
int main(){
	
	float salario, impuestos, salario_neto;


    impuestos=17;
    printf("Ingrese su salario: ");
    scanf("%f", &salario);

    if(salario > 100000)
    	salario_neto= salario - impuestos;
        
    else 
    	salario_neto=salario;

    printf("Salario neto= %d", salario_neto);

	return 0;
}