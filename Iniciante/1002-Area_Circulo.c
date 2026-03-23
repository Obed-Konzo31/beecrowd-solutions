// Problema: 1002 - Área do Círculo 
// Link: https://judge.beecrowd.com/pt/problems/view/1002
/* 
	Descrição:  A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que 			π = 3.14159. Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
	Apresentar a mensagem "A=" seguido pelo valor da variável area, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double).
*/

#include <stdio.h>
 
int main() 
{
    double area, raio;
    scanf("%lf", &raio);
    area = 3.14159 * raio * raio;
    printf("A=%.4f\n", area);
    return 0;
}
