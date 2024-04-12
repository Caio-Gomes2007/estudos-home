#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int numero_aleatorio = rand();
    FILE *arquivo;
    arquivo = fopen("teste02.txt", "a");

    fprintf(arquivo, "Criando um novo registro %i \n", numero_aleatorio);
    fclose(arquivo);
    return 0;
}