#include <stdio.h>

int  ParORImpar(int x){
    if(x%2==0){
      printf("é par\n");
  }else {
      printf("é impar\n");
  }
}


int main(){

    int x;
    printf("Digite um numero para a verificação\n");
    scanf("%i",&x);
    ParORImpar(x);

}
