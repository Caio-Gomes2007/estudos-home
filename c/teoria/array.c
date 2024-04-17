#include <stdio.h>
int main(){
    char MyArray[][20] = {"caio","sofia","miojo","rai"};
    int tamanhoArray = sizeof(MyArray) / sizeof(MyArray[0]);
   
    for(int i = 0 ; i < tamanhoArray; i++){
         printf("%s\n",MyArray[i]);
    };
    char MyArray[4] = "jesus";
    return 0;
}