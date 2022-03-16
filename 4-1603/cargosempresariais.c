/*
Programa feito para definir o tipo de cargo e salario empresarial do usuario,
precisamente feito para informar o tipo de salario a cada cargo.
*/
#include <stdio.h>

int main()
{
    char cargo[20];
    printf("Digite o seu cargo empresarial e aperte ENTER\n");
    scanf("%s", &cargo);

    if(strcmp(cargo,"Diretor")==0)
    {
        printf("O salario do diretor é R$15.000,00\n");
    }
    else if (strcmp(cargo, "Gerente")==0)
    {
        printf("O salario do gerente é R$12.000,00\n");
    }
    else if (strcmp(cargo, "Analista")==0)
    {
        printf("O salario do analista é R$8.000,00\n");
    }
    else if (strcmp(cargo, "Assistente")==0)
    {
        printf("O salario do assistente R$4.000,00\n");
    }
    else if (strcmp(cargo, "Auxiliar")==0)
    {
        printf("O salario do auxiliar é R$2.000,00\n");
    }
    else
    {
        printf("Não há salario.\n");
    }
    
    return 0;
}