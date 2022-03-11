#include <stdio.h>  //Biblioteca de entrada (Input) e saída (Output)
int main()  //Start em lingua C
{
    int Abacate;  //Declarar variavel inteira
    printf("Digite um valor inteiro e ENTER\n");    //Imagem apresentada do comando
    scanf("%d", &Abacate);    //Ler o valor digitado pelo usuario na variavel "j" ( "&" Nos da a posição da variavel)
    printf("Na minha mão o abacate é %d\nVem que tem minha senhora\n", Abacate); //Mensagem dita junto da resposta/digito do usuario
    return 0;
}
