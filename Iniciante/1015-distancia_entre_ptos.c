/************************************************************************************************************
	Beecrowd 1015 - Distância Entre Dois Pontos
	Objetivo: Calcular a distância Euclidiana entre dois pontos no plano cartesiano (p1 e p2).
	Fórmula: $\sqrt{(x2 - x1)^2 + (y2 - y1)^2}$
	Entrada: Duas linhas, cada uma com dois valores de ponto flutuante (x1, y1) e (x2, y2).
	Saída: O valor da distância com 4 casas decimais e quebra de linha.
*************************************************************************************************************/

#include <stdio.h>
#include <math.h>

int main() 
{
	double x1, x2, y1, y2, distancia;
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	printf("%.4lf\n", distancia);
	return 0;
}
