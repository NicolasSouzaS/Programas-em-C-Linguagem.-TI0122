/*
Programa feito para definir o tipo de cargo e salario empresarial do usuario,
precisamente feito para informar o tipo de salario a cada cargo.
*/
#include <stdio.h>     //Biblioteca que puxa IntPut e OutPut

int main()      //Start em linguagem C
{
    char cargo[20];  /*Variavel char para carectere combinada com [20]
     feito para dar mais de 0 a 20 caractere em uma frase ou texto*/
    printf("Digite o seu cargo empresarial e aperte ENTER\n");  //Mensagem mostrada ao usuário
    scanf("%s", &cargo);    /*Lê o digito feito pelo usuário com o "%s" usado para char (caractere)
    com mais de 1 digito, alocado a variavel criada chamada "cargo".
    */

    if(strcmp(cargo,"Diretor")==0)  /*if, feito para "Se", else para "Senão", else if "Senão se"
    "strcmp ==0)" comando que pega a string e compara com o digito que foi digitado pelo usuario e
    foi scaneado/lido pelo "scanf". "
    */
    {
        printf("O salario do diretor é R$15.000,00\n");
    }
    else if (strcmp(cargo, "Gerente")==0)
    {
        printf("O salario do gerente é R$12.000,00\n");
    }
    else if (strcmp(cargo, "Analista")==0)
    {
        printf("O salario do analista é R$8.000,00\n");
    }
    else if (strcmp(cargo, "Assistente")==0)
    {
        printf("O salario do assistente R$4.000,00\n");
    }
    else if (strcmp(cargo, "Auxiliar")==0)
    {
        printf("O salario do auxiliar é R$2.000,00\n");
    }
    else
    {
        printf("Não há salario.\n");
    }
    
    return 0;
}