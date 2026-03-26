/************************************************************************************************************
	Beecrowd 1012 - Área
	Objetivo: Calcular e exibir as áreas de cinco formas geométricas diferentes (Triângulo, Círculo, Trapézio, Quadrado e 	Retângulo) com base nos valores A, B e C.
	Fórmulas: 
		 - Triângulo: (A * C) / 2
		 - Círculo: 3.14159 * C²
		 - Trapézio: ((A + B) * C) / 2
		 - Quadrado: B * B
		 - Retângulo: A * B
	Entrada: Três valores de ponto flutuante (double).
	Saída: Cinco linhas contendo o nome da forma e o valor da área com 3 casas decimais.
*************************************************************************************************************/

#include <stdio.h>

#define PI 3.14159

int main() 
{
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", (A * C) / 2);
    printf("CIRCULO: %.3lf\n", PI * C * C);
    printf("TRAPEZIO: %.3lf\n", ((A + B) * C) / 2);
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);
    return 0;
}
