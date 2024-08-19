#include <stdio.h>


int main(){
	int i,add;
	int repet =0;
	int tamanho = 10;
	int arr[50];

	for (i = 0; i < tamanho; ++i) {
		printf("Digite um numero\n");
		scanf("%i",&arr[i]);	
	};
		printf("Digite o numero add\n");
		scanf("%i",&add);

	for (i = 0; i < tamanho; ++i) {
		if(arr[i]==add){
			repet+=1;	
		};
	};

	printf("%i",repet);
	return 0;
}
