#include <stdio.h>

int main(){
	int i,j,flag;
	int arr[50];
	int tamanho = 10;
	//pedindo dados
	for (i = 0; i < tamanho; ++i) {
		printf("Digite um numero\n");
		scanf("%i",&arr[i]);
	}
	flag=1;
	while(flag){
		flag=0;
		for (i = 0; i < tamanho-1; ++i) {
			if(arr[i]==arr[i+1]){
				for(j=i+1;j<tamanho-1;++j){
					arr[j]=arr[j+1];
				}
				tamanho--;
				flag=1;
				break;
			};
		};
	};
	for (i = 0; i < tamanho; ++i) {
		printf("%i\n",arr[i]);
	};
	return 0;

}
