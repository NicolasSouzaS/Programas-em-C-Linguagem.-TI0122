//Programa p/ calcular area, dado o raio (terceiro.c)
#include<stdio.h>   //Biblioteca padrão de Input(Entrada) Output(Saída)
#define PI 3.14159  //Constante PI
//A seguir a função main()
int main()
{
    float raio, area;   //duas variaveis, declaradas
    printf("Digite o valor do raio do circulo, e ENTER\n");  //Mensagem mostrada ao usuario (Inicialmente)
    scanf("%f", &raio); //lê do teclado com scanf; note o & em &raio (Lê o numero ou caractere digitado pelo usario)
    //A seguir mostra na tela o valor do raio lido
    //usando 12 colunas, e 2 decimais arredondados
    //por ex. 1.576 é arredondado para 1.58, só na tela
    printf("Raio digitado é %12.2f\n", raio);   //%12.2f = 12 colunas
    area = PI * raio * raio;
    printf("Area do circulo com raio %f é %f\n", raio, area);   //Mensagem mostrada para o usuario pós o digito de float (Final)
    return 0;
}//Fim
