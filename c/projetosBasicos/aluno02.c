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
void ler(aluno listadealunos[], int numAluno)
{
    printf("alunos cadastrados\n\n");
    for (int i = 0; i < numAluno; i++)
    {
        printf("Aluno %i\n", i + 1);
        printf("nome: %s\n", listadealunos[i].nome);
        printf("idade: %i\n", listadealunos[i].idade);
        printf("\n");
    }
}
void deletar(aluno listadealunos[], int *numAluno)
{
    int index;
    printf("digite o numero do aluno desejado \n");
    scanf("%i", &index);

    if (index < 1 || index >= *numAluno)
    {
        printf("erro no index do aluno");
    }
    for (int i = index - 1; i < *numAluno - 1; i++)
    {
        listadealunos[i] = listadealunos[i + 1];
        // ex: a informação do 4 vai pro 3  e assim em diante
    }
    (*numAluno)--;
}
void editar(aluno listadealunos[],int *numAluno){
    int index02;
    printf("Digite o número do aluno que deseja editar: ");
    scanf("%i", &index02);

    if (index02 < 1 || index02 > *numAluno) {
        printf("Erro: Índice inválido.\n");
    } else {
        printf("Digite o novo nome do aluno: ");
        scanf("%s", listadealunos[index02 - 1].nome);
        printf("Digite a nova idade do aluno: ");
        scanf("%i", &listadealunos[index02 - 1].idade);
        printf("Aluno editado com sucesso!\n");
    }
}
int main()
{

    int tipoOpe;
    int index02;
    int numAluno = 0;
    aluno listadealunos[MAX_ALUNOS];
    do
    {
        printf("\nOlá, bem-vindo ao novo cadastro de alunos!\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Ver alunos cadastrados\n");
        printf("3 - Editar aluno\n");
        printf("4 - Deletar aluno\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%i", &tipoOpe);
        switch (tipoOpe)
        {
        case 1:
            add(listadealunos, &numAluno);
            break;
        case 2:
            ler(listadealunos, numAluno);
            break;
        case 3:
            editar(listadealunos,&numAluno);
            break;
        case 4:
            deletar(listadealunos, &numAluno);
    break;

        case 5:
            printf("Saindo \n");
            break;
        default:
            printf("erro operação invalida\n");
            break;
        }
    } while (tipoOpe != 5);

    return 0;
}