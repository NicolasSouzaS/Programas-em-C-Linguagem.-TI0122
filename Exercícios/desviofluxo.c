#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Informe o numero:");
    scanf("%d", &num);

    if (num > 20)
    {
        printf("Maior que 20\n");

    }

    else if (num == 20)
    
    {
        printf("Igual a 20\n");
    }
    
  
  
    else

    {
        printf("Menor que 20\n");
    }
}