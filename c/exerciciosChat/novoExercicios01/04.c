#include <stdio.h>

void fatorial(int x) {
  int fatorial = 1;
  for (int i = 1; i <= x; i++) {
    fatorial = fatorial * i;
  }
  printf("o fatorial de %i  é %i", x, fatorial);
}

int main() {
  int x;
  printf("Digite o numero para fatorial: ");
  scanf("%i", &x);
  fatorial(x);
  return 0;
}
