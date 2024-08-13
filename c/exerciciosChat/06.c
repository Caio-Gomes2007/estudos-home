#include <stdio.h>
int fatorial(int x){
    int i;
    int fat =1;
    for(i=x;i>1;i--){
        fat =fat*i;
    }
        printf("%i",fat);
}
int main(){
    int x;
    printf("digite um numero\n");
    scanf("%i",&x);
    fatorial(x);
    return 0;
}