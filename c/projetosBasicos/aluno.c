// blibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_ALUNOS 50
struct aluno
{
    int idade;
    char nome[20];
    char email[30];
    int nota01;
    int nota02;
    int nota03;
    int nota04;
    char sit[30];
};
typedef struct aluno aluno;
// funções do aluno
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
        printf("Digite a primeira nota dele:");
        scanf("%i", &listadealunos[*numAluno].nota01);
        printf("Digite a segunda nota dele: ");
        scanf("%i", &listadealunos[*numAluno].nota02);
        printf("Digite a terceira nota dele: ");
        scanf("%i", &listadealunos[*numAluno].nota03);
        printf("Digite a quarta nota dele: ");
        scanf("%i", &listadealunos[*numAluno].nota04);

        int media = (listadealunos[*numAluno].nota01 + listadealunos[*numAluno].nota02 + listadealunos[*numAluno].nota03 + listadealunos[*numAluno].nota04) / 4;
        if (media >= 6)
        {
            strcpy(listadealunos[*numAluno].sit, "Aprovado");
        }
        else
        {
            strcpy(listadealunos[*numAluno].sit, "Reprovado");
        }

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
        printf("Nota 1: %i\n", listadealunos[i].nota01);
        printf("Nota 2: %i\n", listadealunos[i].nota02);
        printf("Nota 3: %i\n", listadealunos[i].nota03);
        printf("Nota 4: %i\n", listadealunos[i].nota04);
        printf("Situação: %s\n", listadealunos[i].sit);
        printf("\n");
    }
}
void deletar(aluno listadealunos[], int *numAluno)
{
    int index;
    char decisao;
    printf("digite o numero do aluno desejado \n");
    scanf("%i", &index);
    printf("quer mesmo apaga-lo?(s/n) \n");
    scanf(" %c", &decisao);
    if (decisao == 'n' || decisao == 'N')
    {
        printf("retornando...");
    }
    else if (decisao == 's' || decisao == 'S')
    {
        if (index < 1 || index >= *numAluno)
        {
            printf("erro no index do aluno");
        }
        for (int i = index - 1; i < *numAluno - 1; i++)
        {
            listadealunos[i] = listadealunos[i + 1];
            // ex: a informação do 4 vai pro 3  e assim em diante
        }
        printf("Aluno apagado com sucesso");
        (*numAluno)--;
    }
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
        printf("Digite a nota01: ");
        scanf("%i", &listadealunos[index - 1].nota01);
        printf("Digite a nota02: ");
        scanf("%i", &listadealunos[index - 1].nota02);
        printf("Digite a nota03: ");
        scanf("%i", &listadealunos[index - 1].nota03);
        printf("Digite a nota04: ");
        scanf("%i", &listadealunos[index - 1].nota04);

        int media = (listadealunos[*numAluno].nota01 + listadealunos[*numAluno].nota02 + listadealunos[*numAluno].nota03 + listadealunos[*numAluno].nota04) / 4;
        if (media >= 6)
        {
            strcpy(listadealunos[*numAluno].sit, "Aprovado");
        }
        else
        {
            strcpy(listadealunos[*numAluno].sit, "Reprovado");
        }

        printf("Aluno editado com sucesso!\n");
    }
}
void buscar(aluno listadealunos[], int *numAluno)
{

    char valor[50];
    printf("Digite o valor a ser encontrado");
    scanf("%s", valor);
    for (int i = 0; i < *numAluno; i++)
    {
        if (strstr(listadealunos[i].nome, valor) != NULL ||
            strstr(listadealunos[i].email, valor) != NULL ||
            listadealunos[i].idade == atoi(valor) ||
            listadealunos[i].nota01 == atoi(valor) ||
            listadealunos[i].nota02 == atoi(valor) ||
            listadealunos[i].nota03 == atoi(valor) ||
            listadealunos[i].nota04 == atoi(valor))
        {
            printf("Aluno %d:\n", i + 1);
            printf("Nome: %s\n", listadealunos[i].nome);
            printf("Idade: %d\n", listadealunos[i].idade);
            printf("Email: %s\n", listadealunos[i].email);
            printf("Nota 01: %d\n", listadealunos[i].nota01);
            printf("Nota 02: %d\n", listadealunos[i].nota02);
            printf("Nota 03: %d\n", listadealunos[i].nota03);
            printf("Nota 04: %d\n", listadealunos[i].nota04);
            printf("Situação: %s\n", listadealunos[i].sit);
            printf("\n");
        }
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
        // Menu
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
            buscar(listadealunos, &numAluno);
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
