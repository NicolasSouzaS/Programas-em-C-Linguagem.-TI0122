#include <stdio.h>  //Biblioteca padrão de Input(Entrada) Output(Saída)
int main()
{
    char car;   //char para digitar letras. car (Caractere). (Char somente usado para letras)
    printf("Digite um caractere e ENTER\n");    //Mensagem mostrada ao usuario
    scanf("%c", &car);  //Ler o caractere digitado pelo usario (& Usado para localização da variavel)
    printf("Caractere que você digitou é %c\nAí está :)\n", car);   //Mensagem dita para a resposta do usuario
    return 0;
}