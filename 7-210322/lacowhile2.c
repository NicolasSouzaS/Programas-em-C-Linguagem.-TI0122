/*
Programa para executar o comando while, para manter a tela
sempre ativa. Caso o usuário digita 9, então a tela será
liberada
*/

#include <stdio.h>

int main()
{
    int textonum;
    printf("Digite uma numero para sair e tecle ENTER\n");
    scanf("%d", &textonum);

    while (textonum !=9)
    {
        system("clear");
        printf("\nVocê errou ...... !!! | :(\n");

        printf("Tente outra vez e tecle ENTER\n");
        scanf("%d", &textonum);

    }

    return 0;
    
}