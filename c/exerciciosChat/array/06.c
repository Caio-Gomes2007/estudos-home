#include <stdio.h>
#include <string.h>

int palindromo(char strr[]){
	int tamanho = strlen(strr);
	int i;
	int j = tamanho-1;
	char antiga[50];
	strcpy(antiga,strr);
	for(i = 0 ; i < j;i++,j--){
		char temp = strr[i];
		strr[i] = strr[j];
		strr[j]= temp;
	}
	if(strcmp(antiga,strr)==0){
		printf("É um palindromo!");
	}else {
		printf("Não é um palindromo");
	};
}


int main(){
	char strr[50];
	printf("digite a palavra\n");
	scanf("%s",strr);
	palindromo(strr);
	return 0;
}
