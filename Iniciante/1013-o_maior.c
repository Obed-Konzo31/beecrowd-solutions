/************************************************************************************************************
	Problema: 1013 - O Maior
	Objetivo: Encontrar o maior entre três valores inteiros (A, B e C).
	Fórmula: MaiorAB = (a + b + abs(a - b)) / 2.
	Estratégia: Aplicar a fórmula entre A e B, e depois entre o resultado (MaiorAB) e C.
	Entrada: Três valores inteiros.
	Saída: O maior valor seguido da mensagem "eh o maior" e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h> // Necessária para a função abs()

int main() 
{
	int a, b, c, maior;
	scanf("%d %d %d", &a, &b, &c);
	maior = (a + b + abs(a - b)) / 2;
	maior = (maior + c + abs(maior - c)) /2;
	printf("%d eh o maior\n", maior);
    return 0;
}
