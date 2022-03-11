//Programa feito para criar operações matematicas
#include<stdio.h>   //Biblioteca padrão Input(Entrada) e Output(Saída)

int main()  //Start em lingua C
{
    float num1, num2, soma, sub, div, mut;    //Variaveis de numeros inteiros que vão fazer as operações basicas
    printf("Digite um valor inteiro para o primeiro numero\n");  //Mensagem mostrada para o usuario
    scanf("%f", &num1); //Lê o digito feito pelo usuario
    printf("Digite o segundo valor inteiro para o segundo\n");    //Mensagem mostrada para o usuario
    scanf("%f", &num2); //Lê o digito feito pelo usuario
    
     soma= num1 + num2;
    sub= num1 - num2;
    div= num1 / num2;
    mut= num1 * num2;
    
    printf("O valor somado do primeiro e do segundo numero é %f\n", soma);
    printf("O valor subtraido do primeiro e segundo numero é %f\n", sub);
    printf("O valor dividido do primeiro e segundo numero é %f\n", div);
    printf("O valor da mutiplicação do primeiro e segundo numero é %f\n", mut);

   
    
    return 0;
}