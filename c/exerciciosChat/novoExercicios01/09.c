#include <stdio.h>

void SomaDosDigitos(int x) {

  int ultimo_digito = x % 10;
  while (x >= 10) {
    x = x / 10;
  }
  int primeiro_digito = x;
  int soma = ultimo_digito + primeiro_digito;
  printf("%d\n", soma);
}

int main() {
  int x;
  printf("Digite o numero com mais de um digito: ");
  scanf("%i", &x);
  SomaDosDigitos(x);
}
