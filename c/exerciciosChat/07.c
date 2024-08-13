#include <stdio.h>
#include <string.h>

int palindromo(char str[]){
    int i;
    char antiga[50];
    strcpy(antiga,str);


    int tamanho = strlen(str);
    int j = tamanho-1;
    for(i=0;i<j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    if(strcmp(antiga,str)==0){
        printf("é palindromo");
    }else{
        printf("n é palindromo");
    }
}

int main(){
    char string[500];
    printf("digite a palavra\n");
    scanf("%s",string);
    palindromo(string);
}