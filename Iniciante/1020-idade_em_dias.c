/************************************************************************************************************
	Problema: 1020 - Idade em Dias
	Objetivo: Converter uma idade total em dias para o formato Anos, Meses e Dias.
	Premissas: 1 ano = 365 dias | 1 mês = 30 dias.
	Entrada: Um valor inteiro representando o total de dias.
	Saída: A quantidade de anos, meses e dias, cada um em uma linha, conforme a formatação exigida.
*************************************************************************************************************/

#include <stdio.h>

int main() 
{
	int ano, mes, dias;
	scanf("%d", &dias);
	ano = dias / 365;
	dias = dias % 365;
	mes = dias / 30;
	dias = dias % 30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
	return 0;
		
}
