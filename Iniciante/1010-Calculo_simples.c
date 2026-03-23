/************************************************************************************************************
	Problema: 1010 - Cálculo Simples
	Objetivo: Ler informações de duas peças diferentes e calcular o valor total a ser pago.
	Entrada: Duas linhas, cada uma contendo: Código da peça (int), Quantidade (int) e Valor Unitário (double).
	Saída: "VALOR A PAGAR: R$ " seguido do total com 2 casas decimais e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
 
int main() 
{
    int codigo1, codigo2, qtd1, qtd2;
    double valor_unitario_1, valor_unitario_2, valor_pagar;
    scanf("%d %d %lf", &codigo1, &qtd1, &valor_unitario_1);
    scanf("%d %d %lf", &codigo2, &qtd2, &valor_unitario_2);
    valor_pagar = qtd1 * valor_unitario_1 + qtd2 * valor_unitario_2;
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_pagar);
    return 0;
}
