/************************************************************************************************************
	Problema: 1019 - Conversão de Tempo
	Objetivo: Converter um valor inteiro de segundos para o formato horas:minutos:segundos (HH:MM:SS).
	Entrada: Um valor inteiro N correspondente ao tempo total em segundos.
	Saída: O tempo formatado como "H:M:S" seguido de quebra de linha.
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int segundos, minutos, horas;
	scanf("%d", &segundos);
	horas = segundos / 3600;
	segundos = segundos % 3600;
	minutos = segundos / 60;
	segundos = segundos % 60;
	printf("%d:%d:%d\n", horas, minutos, segundos);
	return 0;
}

