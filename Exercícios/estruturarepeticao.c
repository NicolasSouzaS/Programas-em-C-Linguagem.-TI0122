#include <stdio.h>
#include <stdlib.h>
void main()
{
    float num, soma=0,media=0;
    int i;

    //Iniciando laço com for
    for (i=1; i<=10; i++)
    {

        printf("Informe o numero:");
        scanf("%f", &num);
        soma += num;
    }
    
    media = soma / 10;
    printf("A media é: %.2f", media);
}