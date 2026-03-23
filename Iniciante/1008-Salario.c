/************************************************************************************************************
	Problema: 1008 - Salário
	Objetivo: Ler o número do funcionário, horas trabalhadas e valor/hora para calcular o salário total.
	Entrada: 2 números inteiros (ID e horas) e 1 valor de ponto flutuante (valor/hora).
	Saída: Exibir "NUMBER = " (ID) e "SALARY = U$ " seguido do valor com 2 casas decimais.
*************************************************************************************************************/

#include <stdio.h>
 
int main() 
{
    int func_number, horas;
    double salario_por_hora;
   	scanf("%d", &func_number);
   	scanf("%d", &horas);
   	scanf("%lf", &salario_por_hora);
   	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", func_number, salario_por_hora * horas);
   	return 0;
}
