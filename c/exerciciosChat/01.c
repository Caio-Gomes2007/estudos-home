#include <stdio.h>
// Escreva um programa em C para calcular a soma de dois números.

void soma(int num1, int num2)
{
    int result = num1 + num2;
    printf("%i \n", result);
}

int main()
{
    int num1, num2;
    printf("Digite o primeiro número: \n");
    scanf("%i", &num1);

    printf("Digite o segundo número: \n");
    scanf("%i", &num2);
    soma(num1, num2);
    return 0;
}