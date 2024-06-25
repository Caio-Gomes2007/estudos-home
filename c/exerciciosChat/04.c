#include <stdio.h>
// Escreva um programa em C para converter temperatura de Celsius para Fahrenheit.
void CtoF(int c)
{
    float f = (c * 1.8) + 32;
    int convert = f;
    printf("%d\n", convert);
}
int main()
{
    int c;
    printf("Digite a temperatura em c\n");
    scanf("%d", &c);
    CtoF(c);

    return 0;
}