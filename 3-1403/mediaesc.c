/*Programa para dar o resultado da situação do aluno
 se esta aprovado ou reprovado. Vamos levvar em consideração
 a nota do aluno e compará-la a média de
 aprovação da escola. Caso a nota do aluno seja maior ou igual
 a 7, então o aluno estará aprovado, caso contrartio,
 estará reprovado*/

#include <stdio.h>   /*Inicio do programa C, chamando a biblioteca
de input (entrada) e output (Saída)*/

#define mde 7.0     /*Constante de media da escola. "define" comando usado
para definir uma constante. 7.0 pois é a média da escola*/

int main()      //Start em C

{
    float notadoa;  /*Variavel chamada/declarada "notadoa"
     (Nota do Aluno) em variavel float pois pode ser um numero quebrado.*/

    printf("Digite a nota do aluno e ENTER\n"); /*Mensagem mostrada
    ao usuario que está executando o programa*/

    scanf("%f", &notadoa); /*Lê o digito feito pelo usuario e aloca
    para a variavel criada para definir a nota do aluno (notadoa).*/

    //Desvio de fluxo com if .. else
    if(notadoa >= mde)  //Definição para dar
    {
        printf("O aluno está aprovado MEUS PARABÉNS!!!\n");
    }
    else
    {
        printf("O aluno está reprovado infelizmente\n");
    }
    
    return 0;
}

    

