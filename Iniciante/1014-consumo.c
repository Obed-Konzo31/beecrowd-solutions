/************************************************************************************************************
	Problema: 1014 - Consumo
	Objetivo: Calcular o consumo médio de um automóvel (Km/l).
	Fórmula: Distância Total (X) / Combustível Gasto (Y).
	Entrada: Um valor inteiro (X) e um valor de ponto flutuante (Y).
	Saída: Valor do consumo com 3 casas decimais, seguido da unidade "km/l".
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int X;
	double Y;
	scanf("%d", &X);
	scanf("%lf", &Y);
	printf("%.3lf km/l\n", X / Y);
    return 0;
}
