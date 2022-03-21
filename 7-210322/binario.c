/*
Programa para calcular decimal para binario.
*/

#include <stdio.h>

int main()
{
    /*
    Variaveis feitas e criadas para calcular e transformar 
    um decimal digitado pelo usuário e transformar o digito
    para binario
    */
    int decimal = 0;
    int resto = 1;
    int multiplicador = 1;
    int resultado = 0;

    system("clear");    //Comando para limpar o terminal antes de executar o programa
    printf("Digite um numero que queira transforma-lo em binario e tecle ENTER\n");
    /*
        Mensagem mostrada ao usuário que esta executando o comando
    */
    scanf("%d", &decimal);  //Lê o digito feito pelo usuário
    /*
        Laço feito para calcular o decimal para binario comando
        usado "while"
    */
    while(decimal!=0)
    /*
        Calculo feito para transformar decimal para binario
    */

    {
        resto = decimal % 2;    /* Pega a variavel resto que é "0".
        Pega o decimal e divide por 2 agregando o resultado á
        variavel "resto"
        */
        decimal = decimal /2;   /*
        */
        resultado = resultado + resto * multiplicador;
        multiplicador = multiplicador * 10;
    }

    printf("O numero digitado convertido para binario é: %d\n", resultado);

    

    return 0;
}