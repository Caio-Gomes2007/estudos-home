#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 50

struct aluno
{
    int idade;
    char nome[50];
};
typedef struct aluno aluno;

void add(aluno listadealunos[], int *numAluno)
{
    if (*numAluno < MAX_ALUNOS)
    {
        printf("Digite o nome do aluno: ");
        scanf("%s", listadealunos[*numAluno].nome);
        printf("Digite a idade do aluno: ");
        scanf("%i", &listadealunos[*numAluno].idade);
        (*numAluno)++;
        printf("Aluno adicionado com sucesso!\n");
    }
    else
    {
        printf("Limite máximo de alunos atingido.\n");
    }
}
int main()
{

    int tipoOpe;
    int numAluno = 0;
    aluno listadealunos[MAX_ALUNOS];
    do
    {
        printf("ola bem vindo ao novo cadastro de alunos , dessa vez menos burro\n");
        printf("1-cadastrar\n");
        printf("2-ver cadastrados\n");
        printf("3-deletar\n");
        printf("4-sair\n");
        scanf("%i", &tipoOpe);
        switch (tipoOpe)
        {
        case 1:
            add(listadealunos, &numAluno);
            break;
        case 2:
            printf("alunos cadastrados\n");
            for (int i = 0; i < numAluno; i++)
            {
                printf("aluno %i\n", i + 1);
                printf("nome: %s\n", listadealunos[i].nome);
                printf("idade: %i\n", listadealunos[i].idade);
                printf("\n");
            }

            break;
        case 3:
            int index;
            printf("digite o numero do aluno desejado \n");
            scanf("%i", &index);
            if (index < 0 || index >= numAluno)
            {
                printf("erro no index do aluno");
            }
            for (int i = index; i < numAluno - 1; i++)
            {
                listadealunos[i] = listadealunos[i + 1];
            }
            numAluno--;
            break;
        case 4:
            printf("Saindo \n");
            break;
        default:
            printf("erro operação invalida\n");
            break;
        }
    } while (tipoOpe != 4);

    return 0;
}