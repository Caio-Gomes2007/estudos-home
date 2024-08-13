#include <stdio.h>
 // formula float f = (c * 1.8) + 32;

int Ctof(int c){
      float f = (c*1.8)+32;
      int convert = f;
      printf("%ic\n",convert);
}
int main(){
  
  int x;
  printf("Digite o numero para conversão\n");
  scanf("%i",&x);
  Ctof(x);

}
