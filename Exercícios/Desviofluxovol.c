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
    printf("Esta bem alimentado ? <1-SIM/0-NAO>\n");
    scanf("%d", &bemalimentado);
    printf("Está resfriado ? <1-SIM/ 0-NÃO>\n");
    scanf("%d", &resfriado);

        if (peso >= 50 && (idade >= 16 && idade <= 69)
        && bemalimentado && !resfriado)
        printf("O voluntario %s está apto!\n", nome);

        else
            printf("O voluntario %s NÃO está apto\n", nome);
        
        
}