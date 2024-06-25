#include <stdio.h>
#include <string.h>

// Escreva um programa em C para verificar se uma string é um palíndromo.
void Palindromo(char str[])
{
    char antiga[500];
    strcpy(antiga, str);
    int tamanho = strlen(str);
    int i, j;
    for (i = 0, j = tamanho - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    if (strcmp(antiga, str) == 0)
    {

        printf("é um palindromo\n");
    }
    else
    {
        printf("Não é um palindromo\n");
    }
}
int main()
{
    char string[500];
    printf("Digite uma string\n");
    scanf("%s", string);
    Palindromo(string);
    return 0;
}