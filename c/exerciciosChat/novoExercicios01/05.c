#include <stdio.h>

void tabuada(int x) {
  for (int i = 0; i <= 10; i++) {
    int resultado = i * x;
    printf("\n%i x %i = %i", x, i, resultado);
  }
}

int main() {

  int x;
  printf("Digite o numero para a tabuada: ");
  scanf("%i", &x);
  tabuada(x);
  return 0;
}
