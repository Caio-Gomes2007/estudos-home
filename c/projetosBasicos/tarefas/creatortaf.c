#include <stdio.h>

void add(const char *arq, const char *conteudo)
{
    FILE *fptr = fopen(arq, "w");
    if (fptr == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fprintf(fptr, "%s", conteudo);
    fclose(fptr);
}

int main()
{
    int opcao;
    char conteudo[100];    // Usando uma array de caracteres para armazenar o conteúdo
    char nome_arquivo[50]; // Usando uma array de caracteres para armazenar o nome do arquivo

    printf("Ola, sou seu novo criador de tarefas. Vamos começar?\n");
    printf("1 - Criar nova tarefa\n");
    printf("2-visualizar as outras tarefas\n");
    printf("3-editar alguma tarefa\n");
    printf("4-apagar tarefa\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o nome do arquivo: ");
        scanf("%s", nome_arquivo); // Lendo o nome do arquivo

        printf("Digite o conteudo da tarefa: ");
        scanf(" %[^\n]", conteudo); // Lendo o conteudo da tarefa

        add(nome_arquivo, conteudo);
        printf("Tarefa criada com sucesso!\n");
        break;

    default:
        printf("Erro: Opção inválida\n");
        break;
    }

    return 0;
}
