#include <stdio.h>

int maior(int x , int y , int z){
      if(x>y && x>z){
    printf("%i é maior que %i e % i",x,y,z);
  }else if(y>x && y>z){
    printf("%i é maior que %i e %i",y,x,z);
  }else if(z>x && z>y){
    printf("%i é maior que %i e %i",z,y,x);
  }else{
    printf("os numeros são iguais");
  }

}


int main(){
  int x =5;
  int y = 6;
  int z = 7;
  maior(x,y,z);
}
