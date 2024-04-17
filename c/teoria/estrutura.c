#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
};

int main()
{
    struct pessoa pessoa1;
    strcpy(pessoa1.nome, "caio");
    pessoa1.idade = 17;
    printf("Seu nome é %s, e sua idade é %i", pessoa1.nome, pessoa1.idade);
    return 0;
}