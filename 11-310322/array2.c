/*
Programa que exibe a soma
utilizando um array.
*/

#include <stdio.h>
#include <stdlib.h>
#include "calculosarray.h"

void main()
{
    int v[10] = {1,23,52,4,40,14,2,5,8,10};
    soma(v,10);
    maiorValor(v,10);
    menorValor(v,10);
    ordernar(v,10);
}