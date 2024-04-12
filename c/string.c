#include <string.h> 
#include <stdio.h>
int main(){
    char *nome ="caio\n";
    printf("%s",nome);

    char str1[20] = "Hello ";
    char str2[] = "World!";

    // Concatenate str2 to str1 (result is stored in str1)
    strcat(str1, str2);

    // Print str1
    printf("%s", str1);
}