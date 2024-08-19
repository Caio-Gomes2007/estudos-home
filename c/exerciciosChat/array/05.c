#include <stdio.h>

void inverter(int arr[],int tamanho){
	int j;
	int k= tamanho-1;
	printf("array inverão");
	for (j = 0; j <k ; j++,k--) {
		int temp = arr[j];
		arr[j]=arr[k];
		arr[k]=temp;	
		 
	};
};
int main(){
	int arr[50];
	int tamanho;
	int i;
	printf("Digite o tamanho\n");
	scanf("%i",&tamanho);
	for (i = 0; i < tamanho; ++i) {
		printf("Digite o numero\n");
		scanf("%i",&arr[i]);	
	}
	inverter(arr,tamanho);
	int fodase;
	for (fodase = 0; fodase < tamanho; fodase++) {
		printf("%i",arr[fodase]);
	};
	return 0;
	
}


