/************************************************************************************************************
	Problema: 1006 - Média 2
	Objetivo: Calcular a média ponderada de três notas (A, B e C).
	Pesos: Nota A = 2 | Nota B = 3 | Nota C = 5 (Soma dos pesos = 10).
	Entrada: Três valores de ponto flutuante (double) com uma casa decimal.
	Saída: "MEDIA = " com 1 casa decimal e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
 
int main() 
{
    double A, B, C, media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    media = (A * 2 + B * 3 + C * 5) / 10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
