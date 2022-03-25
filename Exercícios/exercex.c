#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, j;
    //Inicio de laço for
    for (i=1; i<=4; i++){

    
    //Inicio de segundo laço for
        for(j=1;j<=4; j++){

        

        if(j<4)
            printf("%d\t", j*i);         
        else
            printf("%d \n",j*i);
    
        }
    }

}