#include <stdio.h>
int main(){
    int day = 7;
    switch (day)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terça");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
    printf("não existe esse dia não parça");
        break;
    }
    return 0;
}