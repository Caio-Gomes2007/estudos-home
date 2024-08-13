//soma de elementos de um array
#include <stdio.h>

int SomaArray(int arr[] , int tamanho){
	int soma=0;
	int i;
     	for( i=0;i<tamanho;i++){
		soma += arr[i];
	
	
	}
	return soma;
}



int main(){
	int myNumbers[] = {1,2,3,4,5};
	int tamanho = sizeof(myNumbers)/sizeof(myNumbers[0]);
	int result = SomaArray(myNumbers,tamanho);
	printf("%i",result);
	return 0;
	
}	
