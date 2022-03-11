//Programa feito para pegar o preço e dar desconto (basicamente)
#include<stdio.h>   //Biblioteca padrao para input e output

int main()  //Start em lingua C
{
    float total, desc, vald, valp;  //Float para numeros quebrados, junto das suas variaveis criadas por mim mesmo
    printf("Digite o valor do produto e ENTER\n");  // Mensagem mostrada para o usuario ou vendedor
    scanf("%f", &valp); //Lê o digito feito pelo usuario com o codigo %f que é o float e enviado para a localização da variavel valor do produto
    printf("Digite a porcentagem em desconto\n");   //Mensagem mostrada para o vendedor ou usuario
    scanf("%f", &desc); //Lê o digito feito pelo usuario com o %f e é enviado para a variavel (criada por mim mesmo) chamada desc (desconto)
    
    desc=desc/100;  //O vendedor insere o valor do desconto e dividimos ele por 100 para dar a porcentagem. "=" simbolo que se serve de disponibilizar função para qualquer tipo de variaveis
    vald=desc*valp; //O desconto convertido que foi dividido por 100, nós mutiplicamos ele pelo valor do produto
    total= valp - vald; //o valor do produto é subtraido pelo valor do desconto e totalizamos o mesmo

    printf("O valor do desconto é %f O valor do produto é %f", vald, total); //Mensagem mostrada para o vendedor ou usuario
    

    return 0;
    
}