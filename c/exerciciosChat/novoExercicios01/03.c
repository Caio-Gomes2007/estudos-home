#include <stdio.h>

void Maior(int x, int y) {
  if (x > y) {
    printf("%i é maior que %i ", x, y);
  } else if (x < y) {
    printf("%i é maior que %i", x, y);
  } else if (x == y) {
    printf("sâo iguais");
  } else {
    printf("algo deu errado");
  }
}

int main() {
  int x, y;
  printf("Digite o primeiro numero: ");
  scanf("%i", &x);
  printf("Digite o segundo numero: ");
  scanf("%i", &y);
  Maior(x, y);
  return 0;
}
