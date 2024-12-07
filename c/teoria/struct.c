#include <stdio.h>

typedef struct{
    int nota1;
    int nota2;
}bimestre;

int main(){
    
    bimestre AlunoCaio;
    AlunoCaio.nota1 = 8;
    AlunoCaio.nota2 = 8;
    printf("nota1: %d, nota2: %d ",AlunoCaio.nota1 , AlunoCaio.nota2);
    return 0;
}
