/********************************************************************************
 	Problema: 1004 - Produto Simples.
	Link: https://judge.beecrowd.com/pt/problems/view/1004

	Objetivo: Ler dois valores inteiros (A e B), calcular o produto e exibir o resultado.
	Entrada: Dois valores inteiros.
	Saída: A mensagem "PROD = " seguida do valor calculado, com quebra de linha.
**********************************************************************************/


#include <stdio.h>
 
int main() 
{
    int A, B, PROD;
    scanf("%d", &A);
    scanf("%d", &B);
    PROD = A * B;
    printf("PROD = %d\n", PROD);
    return 0;
}
