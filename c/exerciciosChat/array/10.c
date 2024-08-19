#include <stdio.h>

int main(){
	int arr[50];
	int i,ultimo;
	int tamanho = 10;
	for (i = 0; i < tamanho; ++i) {
		printf("Digite um numero\n");
		scanf("%i",&arr[i]);
	};
	ultimo = arr[tamanho-1];
	for (i =tamanho-1; i > 0; i--) {
		arr[i] = arr[i-1];
	}
	arr[0] = ultimo;
	printf("Array rotacionada\n");
	for(i=0;i<tamanho;i++){
		printf("%i\n",arr[i]);
	};
	return 0;
}
