#include <stdio.h>
// Escreva um programa em C para ordenar um array de inteiros em ordem crescente.
void arrumar(int arraynum[], int tamanho)
{

    for (int i = 0; i < tamanho; i++)
    {
        int indice = arraynum[i + 1];
        if (indice > arraynum[i])
            arraynum[i - 1] = arraynum[i];
    }

    for (int j = 0; j < tamanho; j++)
    {
        printf("%i", arraynum[j]);
    }
}
int main()
{
    int arraynum[] = {2, 8, 9, 7, 10, 5};
    int tamanho = sizeof(arraynum) / sizeof(arraynum[0]); // o valor total por bit divido pelo tamanho de elemento
    arrumar(arraynum, tamanho);
}