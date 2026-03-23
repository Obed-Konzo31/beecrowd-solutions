/************************************************************************************************************
	Problema: 1009 - Salário com Bônus
	Objetivo: Calcular o salário total de um vendedor (Salário Fixo + 15% de Comissão sobre Vendas).
	Entrada: Nome do vendedor (texto), Salário Fixo (double) e Total de Vendas (double).
	Saída: "TOTAL = R$ " com 2 casas decimais e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
 
int main() 
{
    char nome[25];
    double salario_fixo, total_vendas, total;
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);
    total = salario_fixo + total_vendas * 0.15;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;
}
