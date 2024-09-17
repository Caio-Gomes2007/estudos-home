#include <stdio.h>
int somar(int x, int y)
{
    int result = x + y;
    return result;
};
int sub(int x, int y)
{
    int result = x - y;
    return result;
};
int mult(int x, int y)
{
    int result = x * y;
    return result;
};
int div(int x, int y)
{
    int result = x / y;
    return result;
};

int main()
{
    int opcao;
    do
    {

        printf("ola bem vindo a sua calculadora basica, foi adaptada para ser um  ser um programa continuo, aproveite \n");
        printf("1-fazer uma operação\n");
        printf("2-sair\n");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1:
            printf("NOTA: Não possui uso de numeros com vircula , por favor evitar \n");
            printf("para somar digite '+'\n");
            printf("para diminuir digite '-'\n");
            printf("para multiplicar digite '*'\n");
            printf("para  dividir digite '/'\n");
            char tipoOpe;
            scanf(" %c", &tipoOpe);
            int x, y, resultado;
            switch (tipoOpe)
            {
            case '+':

                printf("digite o primeiro numero ");
                scanf("%i", &x);
                printf("digite o segundo numero ");
                scanf("%i", &y);
                resultado = somar(x, y);
                printf("seu resultado é %i \n", resultado);
                break;
            case '-':
                printf("digite o primeiro numero ");
                scanf("%i", &x);
                printf("digite o segundo numero ");
                scanf("%i", &y);
                resultado = sub(x, y);
                printf("seu resultado é %i \n", resultado);
                break;
            case '*':
                printf("digite o primeiro numero ");
                scanf("%i", &x);
                printf("digite o segundo numero ");
                scanf("%i", &y);
                resultado = mult(x, y);
                printf("seu resultado é %i \n", resultado);
                break;
            case '/':
                printf("digite o primeiro numero ");
                scanf("%i", &x);
                printf("digite o segundo numero ");
                scanf("%i", &y);
                resultado = div(x, y);
                printf("seu resultado é %i \n", resultado);
                break;
            default:
                printf("Case não definido ainda , ou operaão invalida \n");
                break;
            }
            break;
        case 2:
            printf("saindo \n");
            break;
        default:
            printf("algo deu errado\n");
            break;
        }

    } while (opcao != 2);

    return 0;
}
