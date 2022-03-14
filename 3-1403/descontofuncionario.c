/*Programa para calcular o desconto de um funcionario.
Onde o salario sendo maior que 5000.00, terá um desconto de 5%.
Caso contrario, não haverá desconto*/

#include <stdio.h>    /*Chamada da biblioteca de Intput(Entrada)
e Output(Saída)*/
#define LIMITE 5000   /*Constante de 5000 de salario "define" comando para
dar definição de uma constante*/

int main()
{
    float salariofunc;
    printf("Digite o salario do funcionario e aperte ENTER\n"); /* Mensagem
    mostrada ao usuario que está executando o programa*/
    scanf ("%f", &salariofunc); /*Lê o digito feito pelo usuario que está
    executando o programa. "%f" comando para scanear/ler o digito feito pelo usario
    e alocar ao &salariofunc, variavel feita para definir o salario do funcionario.*/


    if(salariofunc > LIMITE)
    {
        printf("O desconto será de: $%.2f\n", (salariofunc*5/100) );
        printf("O valor final é: $%.2f\n",salariofunc - (salariofunc*5/100) );
        
    }
    else
    {
        printf("Não há desconto");
    }
    return 0;

}