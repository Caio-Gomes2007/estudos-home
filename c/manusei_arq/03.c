#include <stdio.h>
int main()
{
    FILE *arquivo;
    arquivo = fopen("teste02.txt", "r");
    char mystring[100];
    fgets(mystring, 100, arquivo);
    printf("%s", mystring);
    fclose(arquivo);
    return 0;
}