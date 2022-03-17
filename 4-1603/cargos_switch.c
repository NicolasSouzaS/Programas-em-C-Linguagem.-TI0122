/*
Programa para exibir o salário do
cargo de acordo com a escolha do usuário.
*/
#include <stdio.h>

int main()
{
    int opcao = 0;

    //Comando para limpar a tela
    system("clear");//clear screen(limpar tela)
    printf("#################################################");
    printf("\n#\t Programa para exibir salário\t\t#\n");
    printf("#################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o numero\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$\t\t\t\t\t\t$\n");
    printf("$\t\t1 - Diretor\t\t\t$\n$\t\t2 - Gerente\t\t\t$\n$\t\t3 - Analista\t\t\t$\n$\t\t4 - Assistente\t\t\t$\n$\t\t5 - Auxliar\t\t\t$\n$\t\t\t\t\t\t");
    printf("$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    scanf("\n%d", &opcao);
    switch(opcao)
    {
        case 1:
            printf("O salário do Diretor é R$ 15.000,00\n");
        break;
    
    
    
        case 2:
            printf("O salário do Gerente é R$ 12.000,00\n");
        break;
    
    
    
        case 3:
            printf("O salário do Analista é R$ 8.000,00\n");
        break;
    
    
    
        case 4:
            printf("O salário do Assistente é R$ 4.000,00\n");
        break;
    
    
    
        case 5:
            printf("O salário do Auxiliar é R$ 2.000,00\n");
        break;
    
        default:
            printf("Não há salário\n");
        break;
    }




    return 0;
}