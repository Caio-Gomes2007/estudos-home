#include <stdio.h>
int main(){
    //while
    int i = 1;
    int j = 1;
    while (i<=5)
    {
        printf("%i\n",i);
        i++;
    };

    do
    {
        printf("\n agora é o do/while , contando %i",j);
        j++;
    } while (j<=5);
    
    for (int f = 0; f < 5; f++)
    {
        printf("\n agora é o for , contando %i",f);        
    }
    


    return 0 ;  
}