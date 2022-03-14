/*Programa para definir o aluno como aprovado, reprovado ou de recuperação*/
#include <stdio.h>  /*Chamada de biblioteca para IntPut e OutPut*/

#define mda 7.0     /*Constante chamada pelo comando define*/

#define mdr 4.0     /*Constante para a nota abaixo de 4.0 comando "define"*/

int main()  /*Start em C*/
{
    float notadoa;  //Variavel feita para dar a nota do aluno "notadoa"
    printf("Digite a nota do aluno e aperte ENTER\n");/*Mensagem mostrada
    ao usuario que está executando o programa*/
    scanf("%f", &notadoa);  //Lê o digito feito pelo usuario*/

    if (notadoa >= mda)
    {
        printf("O aluno foi aprovado\n");

    }

    else if(notadoa <= mdr)
    {
        printf("O aluno foi reprovado\n");

    }
    
    else
    {
        printf("O aluno está de recuperação\n");
        
    }

    return 0;
}