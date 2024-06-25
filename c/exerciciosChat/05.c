#include <stdio.h>
#include <string.h>
// Escreva um programa em C para inverter uma string.
void inverterString(char str[])
{
    int tamanho = strlen(str);
    int i, j;
    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char string[500];
    printf("Digite uma string\n");
    scanf("%s", string);
    inverterString(string);
    printf("%s\n", string);
    return 0;
}