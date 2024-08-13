#include <stdio.h>
#include <string.h>
void invertString(char strr[]){
  int tamanho = strlen(strr);
  int i;
  int j = tamanho -1;
  for (int i=0;i<j ;i++,j--){
	  char temp = strr[i];
	  strr[i]= strr[j];
	  strr[j] = temp;
	}
}

int main(){
	char strr[500];
	printf("Digite a palavra\n");
	scanf("%s",strr);
	invertString(strr);
	printf("%s\n",strr);
	return 0;

}
