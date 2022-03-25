/*
Programa para cadastrar clientes com as seguintes
dados:Nome, Idade, E-mail
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("clear");
    struct cliente  //Uma estrutura composta de varias variaveis com definições variando entre char e int tudo dentro de uma coisa só
    {
        char nome[50];
        char email[100];
        int idade;
    };
    struct cliente novoCliente, *pnovoCliente; //Dando a estrutura há uma variavel chamada "novoCliente"
    {
        pnovoCliente = &novoCliente;

        printf("Entre com o nome do cliente\n");
        scanf("%s", &pnovoCliente->nome);
        
        printf("Entre com o e-mail do cliente\n");
        scanf("%s", &pnovoCliente->email);
        
        printf("Digite a idade do cliente\n");
        scanf("%d",&pnovoCliente->idade);
    };
        printf("O nome do cliente é %s\n", pnovoCliente->nome);
        printf("O e-mail do cliente é %s\n", pnovoCliente->email);
        printf("A idade do cliente é %d\n", pnovoCliente->idade);
    
}