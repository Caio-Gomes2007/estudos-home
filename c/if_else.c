#include <stdio.h>
int main(){
    char *nome ="caio";
    int idade = 18;
    if(idade >= 18){
        printf(" %s já pode votar",nome);
    }else{
        printf("%s ainda não pode votar",nome);
    };
    return 0;
}