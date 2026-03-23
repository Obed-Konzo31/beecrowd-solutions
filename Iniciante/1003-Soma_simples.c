/********************************************************************************
 	Problema: 1003 - Soma Simples.
	Link: https://judge.beecrowd.com/pt/problems/view/1003

	Objetivo: Ler dois valores inteiros (A e B), calcular a soma e exibir o resultado.
	Entrada: Dois valores inteiros.
	Saída: A mensagem "SOMA = " seguida do valor calculado, com quebra de linha.
**********************************************************************************/


#include <stdio.h>
 
int main() 
{
    int A, B, soma;
    scanf("%d", &A);
    scanf("%d", &B);
    soma = A + B;
    printf("SOMA = %d\n", soma);
    return 0;
}
