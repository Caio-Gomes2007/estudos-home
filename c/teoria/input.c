#include <stdio.h>

int main() {
    // int idade;
    // printf("Digite sua idade para podermos ver se você pode votar: \n"); // Adicionado '\n' para descarregar o buffer de saída
    // scanf("%d", &idade); // Corrigido para passar o endereço de 'idade' usando '&'
    
    // if (idade >= 18) {
    //     printf("Você pode votar.\n");
    // } else {
    //     printf("Você não pode votar ainda.\n");
    // }
    
    // Create a string
char firstName[30];

// Ask the user to input some text
printf("Enter your first name: \n");

// Get and save the text
scanf("%s", firstName);

// Output the text
printf("Hello %s", firstName);
    return 0;
}


