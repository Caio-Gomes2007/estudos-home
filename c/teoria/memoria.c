#include <stdio.h>

int main(){

int myAge = 17;
printf("%p",&myAge);//endereço da memoria da variavel myAge
int* ponteiro  = &myAge;// variavel de ponteiro aponta para o endereço de memoria da variavel myAge
printf("\n%p",ponteiro);
printf("\n%i",*ponteiro);

//Note-se que o *O sinal pode ser confuso aqui, pois faz duas coisas diferentes em nosso código:
//  Quando usado em declaração (int* ptr), cria uma variável de ponteiro.
//  Quando não é usado na declaração, ele atua como um operador de deferência.

return 0;
}
