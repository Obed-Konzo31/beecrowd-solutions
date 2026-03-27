/************************************************************************************************************
	Problema: 1018 - Cédulas
	Objetivo: Decompor um valor inteiro no menor número possível de notas (100, 50, 20, 10, 5, 2 e 1).
	Entrada: Um valor inteiro N (0 < N < 1000000).
	Saída: O valor lido seguido da quantidade de cada nota necessária, mantendo a formatação exata e quebras de linha.
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int valorOriginal;
	scanf("%d", &valorOriginal);
	printf("%d\n", valorOriginal);
	printf("%d nota(s) de R$ 100,00\n", valorOriginal / 100);
	printf("%d nota(s) de R$ 50,00\n", (valorOriginal % 100) / 50);
	printf("%d nota(s) de R$ 20,00\n", ((valorOriginal % 100) % 50) / 20);
	printf("%d nota(s) de R$ 10,00\n", (((valorOriginal % 100) % 50) % 20) / 10);
	printf("%d nota(s) de R$ 5,00\n", ((((valorOriginal % 100) % 50) % 20) % 10) / 5);
	printf("%d nota(s) de R$ 2,00\n", (((((valorOriginal % 100) % 50) % 20) % 10) % 5) / 2);
	printf("%d nota(s) de R$ 1,00\n", ((((((valorOriginal % 100) % 50) % 20) % 10) % 5) % 2) / 1);
	return 0;
}

/**************************************************************************************************************************
		SOLUÇÃO ALTERNATIVA
#include <stdio.h>

int main() {
    int valor;
    // Criamos um array com os valores das notas
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    
    if (scanf("%d", &valor) != 1) return 0;

    printf("%d\n", valor);

    // O laço percorre cada nota do array
    for (int i = 0; i < 7; i++) {
        int quantidade = valor / notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
        
        // Atualizamos o valor com o que sobrou (o resto)
        valor %= notas[i];
    }

    return 0;
}
***********************************************************************************************************************/

