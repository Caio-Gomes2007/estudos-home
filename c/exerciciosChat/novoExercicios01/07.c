#include <stdio.h>

void fribo(int sequencia[], int n) {
  sequencia[0] = 0;
  sequencia[1] = 1;

  // Gerar os números da sequência de Fibonacci
  for (int i = 2; i < n; i++) {
    printf("\n valor de i = %i", i); // Linha de depuração opcional
    sequencia[i] = sequencia[i - 1] + sequencia[i - 2];
  }
}

int main() {
  int sequencia[50]; // Array com capacidade para até 50 números
  int n;

  printf("Quantos números da série de Fibonacci você quer?: ");
  scanf("%i", &n);

  // Verifica se o valor de 'n' é válido
  if (n <= 0) {
    printf("Por favor, insira um número maior que 0.\n");
  } else if (n > 50) {
    printf("Por favor, insira um número até 50.\n");
  } else {
    fribo(sequencia, n); // Chama a função para gerar a sequência
    printf("\nSequência de Fibonacci: ");

    // Imprimir a sequência gerada
    for (int i = 0; i < n; i++) {
      printf("%i ", sequencia[i]);
    }
    printf("\n");
  }

  return 0;
}
