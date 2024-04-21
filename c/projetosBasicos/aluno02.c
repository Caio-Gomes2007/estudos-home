#include <stdio.h>
#include <string.h>
#define MAX_ALUNOS 50

struct aluno
{
    int idade;
    char nome[50];
    char email[50];
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
        printf("Digite seu email: ");
        scanf("%s", listadealunos[*numAluno].email);
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
        printf("email: %s\n", listadealunos[i].email);
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
void editar(aluno listadealunos[], int *numAluno)
{
    int index;
    printf("Digite o número do aluno que deseja editar: ");
    scanf("%i", &index);

    if (index < 1 || index > *numAluno)
    {
        printf("Erro: Índice inválido.\n");
    }
    else
    {
        printf("Digite o novo nome do aluno: ");
        scanf("%s", listadealunos[index - 1].nome);
        printf("Digite a nova idade do aluno: ");
        scanf("%i", &listadealunos[index - 1].idade);
        printf("Digite o novo email: ");
        scanf("%s", listadealunos[index - 1].email);
        printf("Aluno editado com sucesso!\n");
    }
}
void buscar_nome(aluno listadealunos[], int numAluno)
{
    char possivelNome[50];
    int alunoAchado = 0;
    printf("digite o nome dele \n");
    scanf("%s", possivelNome);

    for (int i = 0; i < numAluno; i++)
    {
        if (strcmp(listadealunos[i].nome, possivelNome) == 0)
        {
            printf("\nachamos:\n");
            printf("%s\n", listadealunos[i].nome);
            printf("%i\n", listadealunos[i].idade);
            printf("%s\n", listadealunos[i].email);
            alunoAchado = 1;
        }
    }
    if (alunoAchado == 0)
    {
        printf("erro ao procurar,não achado");
    }
}
void buscar_email(aluno listadealunos[], int numAluno)
{
    char possivelemail[50];
    int alunoAchado = 0;
    printf("digite o email dele \n");
    scanf("%s", possivelemail);

    for (int i = 0; i < numAluno; i++)
    {
        if (strcmp(listadealunos[i].email, possivelemail) == 0)
        {
            printf("\nachamos:\n");
            printf("%s\n", listadealunos[i].nome);
            printf("%i\n", listadealunos[i].idade);
            printf("%s\n", listadealunos[i].email);
            alunoAchado = 1;
        }
    }
    if (alunoAchado == 0)
    {
        printf("erro ao procurar,não achado");
    }
}
int main()
{

    int tipoOpe;
    int tipoOpe02;
    int numAluno = 0;

    aluno listadealunos[MAX_ALUNOS];
    do
    {
        printf("\nOlá, bem-vindo ao novo cadastro de alunos!\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Ver alunos cadastrados\n");
        printf("3 - Editar aluno\n");
        printf("4 - buscar alunos\n");
        printf("5 - Deletar aluno\n");
        printf("6 - Sair\n");
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
            editar(listadealunos, &numAluno);
            break;
        case 4:
            printf("pesquisa por nome(1) ou e-mail?(2) \n");
            scanf("%i", &tipoOpe02);
            switch (tipoOpe02)
            {
            case 1:
                buscar_nome(listadealunos, numAluno);
                break;
            case 2:
                buscar_email(listadealunos, numAluno);
                break;
            default:
                printf("erro na seleçao\n");
                break;
            }
        case 5:
            deletar(listadealunos, &numAluno);
            break;
        case 6:
            printf("\nSaindo\n");
            break;
        default:
            printf("erro operação invalida\n");
            break;
        }
    } while (tipoOpe != 6);

    return 0;
}