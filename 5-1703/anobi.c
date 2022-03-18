/*
Programa para mostrar os anos bissextos de 1950 até
2022
*/
#include <stdio.h>  //Biblioteca IntPut e OutPut

int main()      //Start em C
{
    int ano, quantidade;    //Variaveis

    quantidade=0;   //Quantidade para variaveis
    ano=1950;       //Quantidade para variaveis
    for (ano=1950;ano<=2022;ano++)  //Dar limitação ao numero da variavel
    {
        if( ano % 4 == 0)   //Dar resultado
        {
            printf("%d é bissexto\n", ano);  //Mensagem mostrada
            quantidade++;
        }
        
    }
    printf("Encontramos %d anos bissextos\n", quantidade);

    return 0;
}