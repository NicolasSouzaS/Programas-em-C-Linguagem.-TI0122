#include <stdio.h>
#include <stdlib.h>
void main()
{
    int cargo;
    float salatual, reajuste;
    system("clear");//clear screen(limpar tela)
    printf("#################################################");
    printf("\n#\t Programa para exibir salário\t\t#\n");
    printf("#################################################\n");
    printf("\nEscolha um dos cargos abaixo digitando o numero\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n$\t\t\t\t\t\t$\n");
    printf("$\t\t1 - Diretor\t\t\t$\n$\t\t2 - Gerente\t\t\t$\n$\t\t3 - Analista\t\t\t$\n$\t\t\t\t\t\t");
    printf("$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    scanf("%d", &cargo);
    printf("Informe o salario atual\n");
    scanf("%f", &salatual);

    if (cargo== 1)
    {
        reajuste = (salatual*7) / 100;
    }
    else if(cargo==2)
    {
        reajuste = (salatual*9) / 100;
    }
    else if (cargo==3)
    {
        reajuste = (salatual*12) / 100;
    }
    printf("O novo reajuste é: %.2f", reajuste);
    printf("O novo salario é: %.2f", salatual + reajuste);

}