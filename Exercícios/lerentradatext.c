#include <stdio.h>
#include <stdlib.h>

void main()
{
    char produto[50];
    printf("Informe o nome do produto e tecle 'ENTER': ");
    scanf("\n%[^\n]s", &produto);

    printf("Produto: %s \n", produto);
}