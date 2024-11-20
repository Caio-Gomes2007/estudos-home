#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
  char nome[50];
  char telefone[50];
  char email[50];
};

void add(struct Contato agenda[], int *numContatos) {
  if (*numContatos < MAX_CONTATOS) {
    printf("Digite o nome do contato: ");
    scanf("%s", agenda[*numContatos].nome);

    printf("Digite o telefone do contato: ");
    scanf("%s", agenda[*numContatos].telefone);

    printf("Digite o email do contato: ");
    scanf("%s", agenda[*numContatos].email);

    (*numContatos)++;
    printf("Contato adicionado com sucesso!\n");
  } else {
    printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
  }
}

int main() {
  struct Contato agenda[MAX_CONTATOS]; // Array para armazenar os contatos
  int numContatos = 0;                 // Número atual de contatos na agenda
  int opcao;

  do {
    printf("Olá, bem-vindo à sua agenda de contatos simples!\n");
    printf("\nMenu:\n");
    printf("1. Adicionar Contato\n");
    printf("2. Visualizar Contatos\n");
    printf("3. Buscar Contato\n");
    printf("4. Editar Contato\n");
    printf("5. Excluir Contato\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
      add(agenda, &numContatos);
      break;
    case 2:
      // visu(agenda, &numContatos);
      break;
    case 3:
      // Implemente a função para buscar um contato
      break;
    case 4:
      // Implemente a função para editar um contato
      break;
    case 5:
      // Implemente a função para excluir um contato
      break;
    case 6:
      printf("Saindo...\n");
      break;
    default:
      printf("Opcao invalida!\n");
      break;
    }
  } while (opcao != 6);

  return 0;
}
