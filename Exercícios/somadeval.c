#include <stdio.h>
#include <stdlib.h>

void main()
{
    int soma, num1, num2;
    printf("Informe o primeiro numero\n");
    scanf("%d", &num1);
    printf("Informe o segundo numero que queira soma-lo com o primeiro digitado\n");
    scanf("%d", &num2);

    soma = num1 + num2;

    printf("O resultado da soma é : %d\n", soma);

}