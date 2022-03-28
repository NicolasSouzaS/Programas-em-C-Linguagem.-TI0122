/*
Programa para trabalhar com funções.
Vamos usar funções com retorno, sem retorno
com argumentos(parámetros), sem arumentos
*/
#include <stdio.h>
#include <stdlib.h>

void separadorHT()
{
    printf("\n");
    for(int i = 1 ; i <= 50 ; i++)
    {
        printf("#");
    }
    printf("\n");
}
void separadorLinha()
{
    printf("\n");
    for(int i = 0 ; i <= 50 ; i++)
    {
        printf("_");
    }
    printf("\n");
}

void pularlinha(int qtdVezes)
{
    for(int i=1; i <= qtdVezes; i++)
    {
        printf("\n");
    }
}


char *comparar(int v1, int v2)
{
    if(v1>v2)
    {
        return "O primeiro número é maior que o segundo\n";
    }
       else if(v1==v2)
    {
        return "Os dois números são iguais\n";
    }
    
    
    else
    {
        return "O segundo numero é maior que o primeiro\n";
    }

 
}

void main()
{
    int num1, num2;
    system("clear");   //Limpar a tela do terminal
    //Chamando a função separador HT
    separadorHT();
    printf("\n\tPrograma que exibe uma mensagem\n");
    //Chamando a função separador de linha(separadorLinha)
    separadorLinha();
    pularlinha(2);
    printf("Digite um numero e tecle ENTER\n");
    scanf("%d", &num1);
    printf("Digite um outro numero e tecle ENTER\n");
    scanf("%d", &num2);

    pularlinha(1);

    printf(comparar(num1, num2));

    pularlinha(2);
}