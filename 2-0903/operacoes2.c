//Programa feito para que receba um número e exiba ao usuario o resto da divisão
#include<stdio.h>       //Biblioteca padrão para Input(ENtrada) e Output (Saída)

int main()  //Start em Lingua C
{
    int num1, num2; 
    float div,rest;  //Float para qualquer tipo de numero, seja quebrado ou não e suas variaveis num1 e num2 e a divisão
    printf("Digite um numero que queira dividir e aperte ENTER\n"); //Mensagem mostrada para o usuario
    scanf("%d", &num1); //Lê/Escaneia o digito feito pelo usuario
    printf("Digite o segundo numero que queira dividir pelo primeiro e aperte ENTER\n");    //Mensagem mostrada para o usuario
    scanf("%d", &num2);    //Escaneia o digito feito pelo usuario

    div= num1 / num2;
    rest = num1 % num2;

    printf("O valor divido entre os dois numeros é %f\n", div);
    printf("O resto dos valores é %f\n", rest);

    return 0;
}
