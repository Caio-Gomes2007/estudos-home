#include <stdio.h>

int ParAndImpar(int numeros[], int tamanho){

	int Par = 0;
	int Impar =0;
	int k;
	for (k = 0; k < tamanho; k++) {
		if(numeros[k]%2==0){
			Par+=1;
		}else{
			Impar+=1;
		};
	}printf("Tem %i de par e tem %i de impar\n",Par , Impar);
}

int main(){
	int numeros[50];
	int tamanho;
	int j;
	printf("Quantos numeros irá ter?\n");
	scanf("%i",&tamanho);
	for (j = 0; j < tamanho; ++j) {
		printf("Digite o numero\n");
		scanf("%i",&numeros[j]);
	};
	ParAndImpar(numeros,tamanho);
	return 0;

}
