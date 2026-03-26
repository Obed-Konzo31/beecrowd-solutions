/************************************************************************************************************
	Problema: 1011 - Esfera
	Objetivo: Calcular o volume de uma esfera dado o seu raio (R).
	Fórmula: (4/3) * pi * R³ (Utilizar pi = 3.14159).
	Entrada: Um valor de ponto flutuante (double) para o raio.
	Saída: "VOLUME = " com 3 casas decimais e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>

#define PI 3.14159

int main() 
{
    //const double PI = 3.14159;
    double raio, volume;
    scanf("%lf", &raio);
    volume = (4.0 / 3) * PI * raio * raio * raio;
    printf("VOLUME = %.3lf\n", volume);
    return 0;
}
