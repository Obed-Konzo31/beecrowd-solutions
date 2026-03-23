/************************************************************************************************************
	Problema: 1007 - Diferença
	Objetivo: Calcular a diferença entre o produto de A e B e o produto de C e D.
	Fórmula: DIFERENCA = (A * B - C * D).
	Entrada: Quatro valores inteiros (A, B, C, D).
	Saída: "DIFERENCA = " seguido do valor calculado e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
 
int main() 
{
    int A, B, C, D;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);
    printf("DIFERENCA = %d\n", A * B - C * D);
    return 0;
}
