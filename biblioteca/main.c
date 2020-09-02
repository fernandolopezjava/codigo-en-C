#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
int main()
{
    int unNumero;
    int resultado;
    unNumero = 5;

    resultado = CalcularFactorial(unNumero);

    printf("El factorial de %d es %d", unNumero, resultado);

    return 0;
}


