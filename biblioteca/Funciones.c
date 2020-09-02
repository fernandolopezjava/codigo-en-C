#include "Funciones.h"
int CalcularFactorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * CalcularFactorial(numero-1);//Llamada a la funcion recursiva
    }

    return resultado;

}
