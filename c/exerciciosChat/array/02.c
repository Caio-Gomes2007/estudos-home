#include <stdio.h>

int maior(int arr[], int tamanho){
	int max=0;
	for ( int j = 0; j < tamanho;j++){
		if(arr[j]>max){
			max = arr[j];
		}
	}
	printf("O mairo numero é %d\n",max);
}
int menor(int arr[], int tamanho){
	int min;
	for (int l = 0; l < tamanho; l++) {
		if(arr[l]<min){
			min = arr[l];
		}
	}printf("O menor numero é %d",min);
}


int main(){
	int arr[50];
	for(int i= 0 ; i<5; i++){
		printf("Digite um numero para a array\n");
		scanf("%i",&arr[i]);
	};
	maior(arr,5);
	menor(arr,5);
	return 0;
}


