/*
Programa que exibe uma mensagem de boas vindas ao nosso
usuário
*/
#include <stdio.h>

int main()
{
    char texto[50] = "Olá! Seja Bem vindo. Tenha um ótimo dia.\n";

    /*
     "Char (Character) com um unico caractere se usa "%c", mas dando inicio a uma cadeia de caracteres
     usando a variavel e com sua quantidade de caracteres ao lado ex: texto[20]. Nós devemos usar o 
     comando "%s" para apresentar junto de si sua cadeia de caracteres. Após definir a variavel 
     com sua quantidade de caracteres, nós damos a definição dessa variavel por ex: char texto[20] =
     "Mensagem desejada com a quantidade de caracteres indicada a usar".
    */
    printf("%s",texto);

    return 0;
}