/*
Programa pede ao usuário que digite o seu nome.
Ao fazer será alocado na variavel nome
*/
#include <stdio.h>

int main()
{

    char nome[30];  //[30] caracteres podendo se usar ao "char" (caractere).

    printf("Digite o seu nome completo");   //Mensagem mostrada ao usuario que executa o programa.
    scanf("%s\n", nome);    /*Lê o digito feito pelo usuario com o "%s" usado para mostrar mais caracteres
     definida pela variavel (30)*/
    
    printf("%s\n", nome);   //Mensagem mostrada ao usuario com o caractere que foi digitado pelo mesmo.

    return 0;

}