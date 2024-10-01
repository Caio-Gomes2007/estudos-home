#include <stdio.h>

void media(int notas[]) {
  int soma = 0;
  for (int i = 0; i < 5; i++) {
    soma = soma + notas[i];
  }
  int resultado = soma / 5;

  if (resultado > 6) {
    printf("Sua media é %i , você passou", resultado);
  } else if (resultado < 5) {
    printf("Sua media é %i ,  você n passou", resultado);
  }
}

int main() {
  int notas[50];

  for (int i = 0; i < 5; i++) {
    printf("\nQual é a nota %i: ", i + 1);
    scanf("%i", &notas[i]);
  }
  media(notas);
}
