// Problema: 1001 - Extremamente Básico 
// Link: https://judge.beecrowd.com/pt/problems/view/1001
// Descrição: Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X.

#include <stdio.h>
 
int main()
{
    int A, B, X;
    scanf("%d", &A);
    scanf("%d", &B);
    X = A + B;
    printf("X = %d\n", X);
    return 0;
}
