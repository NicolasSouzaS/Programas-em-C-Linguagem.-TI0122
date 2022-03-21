/*
Programa para validar CPF do usuário.
Quando o cpf for inserido, pegamos
os 9 primeiros digitos e passamos para o calculo.
É utilizado um número por vez do cpf mutiplicado
pelo peso partindo de 10 e indo até 2.
Na segunda parte do calculo pegamos os 9 primeiros
mais o digito encontrado e multiplicamos pelo
pesoa a partir de 11. Soma se os valores encontrados
e dividimos por 11. Se o resto da divisão
for menor que 2, então o digito será 0;
caso contrário o resto será subtraido por 11

PS... Toda vez que usar numeros maiores do que 8 digitos
devemos usar a variavel char, mas devemos subtrair por 48
pois o numero sempre será representado por um simbolo que tem um
valor muito maior.
*/
#include <stdio.h>

int main()
{   
    /*
    Variaveis criadas para calcular o CPF
    */
    int peso10 = 10;
    int peso11 = 11;
    int total = 0;
    int resto = 0;
    char CPF[11];
    /*
    Quando o char for para ser um numero, ele pegará o
    numero digitado ou apresentado na tabela ask
    e aí nós devemos subtrai-lo por "-48" para nós termos
    o numero int, pois não podemos usar int quando os digitos
    forem mais do que 8
    */

    system("clear");    //Comando para limpar a tela
    printf("Insira o seu CPF e tecle ENTER\n");
    /*
    Mensagem mostrada ao usuario
    */
    scanf("%s", CPF); 

    /*Converter todos os caracteres do CPF
    para número. Para isso devemos criar
    um conjunto de números em tipo int e
    realizar a conversão usando for*/
    int iCPF[11];
    for(int x=0;x<=10;x++)
    /*
    Nós vamos calcular o "char" subtraindo por "-48" que ai pegamos o numero
    inteiro que subtraimos do simbolo "char" que é encontrado na tabela ask
    */   
    {
        iCPF[x]=CPF[x]-48;
    }

    /*
         O comando é executado para aumentar a quantidade da variavel
        "total", para isso, ele pega o "iCPF" que é digitado pelo usuário
        feito no "printf", pegando os digitos feito pelo usuario e tendo
        o "CPF" que foi digitado pelo mesmo, nós após ter subtraido o
        resultado do "char" que o resultado se encontra na tabela ask
        nós pegamos o "iCPF" que é o resultado em inteiro subtraido da
        tabela ask, nós fazemos o calculo feito no excel usando 9 digitos
        para encontrar os digitos finais, nós atribuimos á variavel "total"
    */
    for(int i=0;i<=8;i++)
    {
        total += iCPF[i]*peso10;    
        peso10--;
    }

    resto = total % 11;
    /*
    Se o resto da divisão for menor que 2, então
    o primeiro digito de verificação será 0(zero)
    */

    if(resto <2)        
    /*
    Usamos a regra estabelicida dizendo que se o digito for
    menor que 2 o digito que será 0
    */
    {
        iCPF[9]=0;

    }
    else
    /*
    Se for maior que 2 nós subtraímos por 11 e o resultado será o
    digito
    */
    {
        iCPF[9]= 11 - resto;
    }

    total = 0;      
    /*
    Nós limpamos a variavel para calcular novamente o
    resultado
    */
    resto = 0;
    /*
    Nós limpamos a variavel para calcular novamente o
    resultado
    */

    

    /*
    Laço ou looping, feito para encontrar o segundo digito
    é o mesmo comando que usamos para encontrar o primeiro digito
    */
    for(int i=0;i<=9;i++)
    {
        total += iCPF[i]*peso11;
        peso11--;
    
    }

    resto = total % 11;
    if(resto <2)
    {
        iCPF[10] = 0;
    }
    else
    {
        iCPF[10] = 11-resto;
    }

    for(int i = 0; i <= 10; i++)
    {
        printf("%d", iCPF[i]);
    }
    
    
    return 0;
}
