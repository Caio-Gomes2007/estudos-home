#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STR_LENGTH 100
#define MAX_ARRAY_LENGTH 10

int main()
{
    // variaveis necessarias
    char array[MAX_ARRAY_LENGTH][MAX_STR_LENGTH];
    int index = 0;
    char txt[MAX_STR_LENGTH];
    int firstdec;

    do
    {
        printf("bem vindo ao cadastro burro de alunos mais burros ainda\n");
        printf("1-cadastrar\n");
        printf("2-mostrar os ja cadastrados\n");
        printf("3-sair\n");
        scanf("%i", &firstdec);
        switch (firstdec)
        {
        case 1:
            printf("digite o nome de um aluno: ");
            scanf("%s", txt);
            strcpy(array[index], txt);
            printf("%s adicionado com sucesso \n", txt);
            index++;
            break;
        case 2:
            system("clear");
            for (int i = 0; i < index; i++)
            {
                printf("Aluno %d: %s\n", i + 1, array[i]);
            };
            break;
        case 3:
            printf("saindo\n");
            break;
        default:
            printf("algo deu errado");
            break;
        }

    } while (firstdec != 3);

    return 0;
}
