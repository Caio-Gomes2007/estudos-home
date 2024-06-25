#include <stdio.h>
// Escreva um programa em C para encontrar o maior entre três números.
int maior(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
    {
        printf("%i é o maior\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("%i é o maior\n", num2);
    }
    else if (num3 > num2 && num3 > num1)
    {
        printf("%i é o maior\n", num3);
    }
    else
    {
        printf("são todos iguais\n");
    }
}

int main()
{
    int num1, num2, num3;
    printf("Digite o primerio numero\n");
    scanf("%i", &num1);
    printf("Digite o segundo numero\n");
    scanf("%i", &num2);
    printf("Digite o terceiro numero\n");
    scanf("%i", &num3);
    maior(num1, num2, num3);
    return 0;
}