/*
Programa para calcular a tabuada de
acordo com a entrada do usuário
*/
#include <stdio.h>  //Chamada de biblioteca de IntPut e Output (Entrada e Saída)

int main()  //Start em linguagem C
{
    int num;    /*Int (numero inteiro representado pela %d
    "num" variavel criada para definir numero)*/
    int mult;   /*Int (Numero inteiro) "mult" variavel criada
    para definir o multiplicador
    */
    system("clear");    //Comando para limpar a tela
    printf("Digite o numero para mutiplicar e tecle/aperte ENTER: ");   /*Mensagem
    mostrada ao usuário*/
    scanf("%d", &num);  //Lê o digito feito pelo usuario com scanf

    for(mult=0;mult<=10;mult++)
    {
        printf("%d x %d = %d\n", num,mult,(num*mult));
    }




    return 0;
}
