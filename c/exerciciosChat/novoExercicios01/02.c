#include <stdio.h>

void ImparPar(int x) {
  if (x % 2 == 0) {
    printf("è par");
  } else {
    printf("è impar");
  }
};

int main() {
  int x;
  printf("Digite o numero para a verificação de par e impar: ");
  scanf("%i", &x);
  ImparPar(x);
}
