/************************************************************************************************************
	Problema: 1017 - Gasto de Combustível
	Objetivo: Calcular a quantidade de litros de combustível gastos em uma viagem.
	Consumo do Automóvel: 12 KM/L.
	Lógica: Distância = Tempo * Velocidade | Litros = Distância / 12.
	Entrada: Dois inteiros: Tempo gasto (horas) e Velocidade média (km/h).
	Saída: Quantidade de litros com 3 casas decimais e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int velocidadeMedia, tempoGasto;
	double qtdLitros;
	scanf("%d", &tempoGasto);
	scanf("%d", &velocidadeMedia);
	qtdLitros = (velocidadeMedia * tempoGasto) / 12.0;
	printf("%.3lf\n", qtdLitros);
	return 0;
}
