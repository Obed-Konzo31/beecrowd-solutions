/********************************************************************************
 	Problema: 1005 - Média 1
	Link: https://judge.beecrowd.com/pt/problems/view/1005

	Objetivo: Calcular a média ponderada de duas notas (A e B).
	Pesos: Nota A = 3.5 | Nota B = 7.5 (Soma dos pesos = 11).
	Entrada: Dois valores de ponto flutuante (0 a 10.0).
	Saída: "MEDIA = " com 5 casas decimais e quebra de linha.
**********************************************************************************/


#include <stdio.h>
 
int main() 
{
    double A, B, media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    media = (A * 3.5 + B * 7.5) / 11;
    printf("MEDIA = %.5lf\n", media);
    return 0;
}
