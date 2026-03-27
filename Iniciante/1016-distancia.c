/************************************************************************************************************
	Problema: 1016 - Distância
	Objetivo: Calcular o tempo (em minutos) que o carro Y leva para abrir uma determinada distância em relação ao carro X.
	Lógica: O carro Y se afasta 1 km a cada 2 minutos em relação ao carro X.
	Entrada: Um valor inteiro representando a distância desejada (Km).
	Saída: O valor do tempo calculado seguido da mensagem "minutos".
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int distancia, tempo;
	scanf("%d", &distancia);
	tempo = distancia * 2;
	printf("%d minutos\n", tempo);
	return 0;
}
