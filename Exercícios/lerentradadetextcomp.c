#include <stdio.h>
#include <stdlib.h>

void main()
{
    char produto[30];
    
    printf("Digite o nome do produto e tecle ENTER\n");
    scanf("\n%[^\n]s", produto);

    printf("Produto: %s \n", produto);

}