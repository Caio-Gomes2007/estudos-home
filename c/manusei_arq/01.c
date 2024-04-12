#include <stdio.h>
int main()
{
    FILE *arquivo;
    arquivo = fopen("teste02.txt", "w");
    fclose(arquivo);
    return 0;
}