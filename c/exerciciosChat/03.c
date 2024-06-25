#include <stdio.h>
// Escreva um programa em C para verificar se um número é par ou ímpar.
int par(int num)
{
    if (num % 2 == 0)
    {
        printf("é par\n");
    }
    else
    {
        printf("é impar\n");
    };
}

int main()
{
    int num;
    printf("Digite um número\n");
    scanf("%i", &num);
    par(num);
    return 0;
}