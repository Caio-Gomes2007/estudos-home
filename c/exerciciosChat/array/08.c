#include <stdio.h>

int main(){
	int arr[10]; 
	int i ,flag, temp;
	for (i = 0; i < 10; ++i) {
		printf("Digite o item %i :",i+1);
		scanf("%i",&arr[i]);
	}
	flag=1;
	while(flag){
		flag=0;
		for(i=0;i<=8;i++){
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				flag=1;
				
			};
}
	}for(i = 0 ; i<10;i++){
		printf("%i\n",arr[i]);

	};
	return 0;
}
