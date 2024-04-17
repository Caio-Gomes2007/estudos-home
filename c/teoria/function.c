#include <stdio.h>
void ola(char nome[], int idade)
{
    if (idade >= 18)
    {
        printf("ola %s , sua idade é %i e você já pode votar \n", nome, idade);
    }
    else
    {
        printf("ola %s , sua idade é %i e você ainda não pode votar \n", nome, idade);
    }
}
int soma(int x, int y)
{
    int result = x + y;
    printf("%i", result);
};
int main()
{
    ola("rai", 18);
    ola("caio", 17);
    soma(10, 5);
    return 0;
}