#include <stdio.h>
// Escreva um programa em C para encontrar o fatorial de um número.

int fat(int num)
{
    int fatorial = 1;
    for (int i = 1; i <= num; i++)
    {
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main()
{
    int num;
    printf("digite um numero\n");
    scanf("%i", &num);
    int result = fat(num);
    printf("%i\n", result);
    return 0;
} // parece erro mas ta certo