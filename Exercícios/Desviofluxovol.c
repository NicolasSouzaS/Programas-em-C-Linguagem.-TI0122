#include <stdio.h>
#include <stdlib.h>
void main()
{
    char nome[30];
    int idade, bemalimentado, resfriado;
    float peso;
    printf("Infome o nome:\n");
    scanf("%s", &nome);
    printf("Informe o peso:\n");
    scanf("%f", &peso);
    printf("Informe a idade:\n");
    scanf("%d",&idade);
    printf("Esta bem alimentado ? <1-SIM/0-NAO>");
    scanf("%d", &bemalimentado);
}