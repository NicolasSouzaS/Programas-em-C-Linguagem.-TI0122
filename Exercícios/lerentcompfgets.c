#include <stdio.h>
#include <stdlib.h>

void main()
{
    char produto[50];
    printf("Informe o nome do produto: \n");
    fgets(produto, 50, stdin);

    printf("Produto %s \n", produto);
    
}