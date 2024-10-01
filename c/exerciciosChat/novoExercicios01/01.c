#include <stdio.h>

int main() {
  int x, y;
  printf("Qual o primeiro numero?\n");
  scanf("%i", &x);
  printf("Qual o segundo numero?\n");
  scanf("%i", &y);
  int resultado = x + y;
  printf("%i", resultado);
  return 0;
}
