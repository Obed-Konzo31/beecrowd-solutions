/************************************************************************************************************
	
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

/*
	idadeAnos = idadeDias // 365
diasRest = idadeDias % 365
idadeMes = diasRest // 30
idadeDias = diasRest % 30


Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.
Entrada

O arquivo de entrada contém um valor inteiro.
Saída

Imprima a saída conforme exemplo fornecido.

*/
