#include <stdio.h>

void primos(int x) {
  int nDivisores = 0;
  for (int i = 1; i <= x; i++) {

    if (x % i == 0) {
      nDivisores = nDivisores + 1;
    }
  }
  if (nDivisores <= 2) {
    printf("é primo");
  } else if (nDivisores >= 2) {
    printf("N é primo");
  }
}

int main() {
  int x;
  printf("Digite o numero para a verificação: ");
  scanf("%i", &x);
  primos(x);
  return 0;
}
