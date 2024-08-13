#include <stdio.h>

int media(int arr[],int tamanho){
	int mediacalc=0; 
	for (int j =0 ; j <tamanho;j++) {
		mediacalc+=arr[j];
		
	}
	int result = mediacalc/tamanho;
	printf("A media é aproximadamente: %i",result);


}



int main(){
	int arr[50];
	int tamanho;
	printf("Digite o tamanho da media\n");
	scanf("%i",&tamanho);
	
	for (int i = 0; i < tamanho; ++i) {
	printf("Digite um numero\n");
	scanf("%i",&arr[i]);
	}
	media(arr,4);
	return 0 ;
}


