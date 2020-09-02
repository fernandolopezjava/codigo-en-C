#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long int Factorial(long int numero);
//int es_entero(char *cadena)

int main()
{
    float valor;
    int entero;
    int resultado;



    printf("Ingrese numero:");
    scanf("%f",&valor);
    entero = valor;
    if(valor - entero)
    {
        printf("\nEs un numero decimal\n");
    }
    else
    {
        resultado = Factorial(valor);
        printf("\nEl factorial de %f es %d\n",valor,resultado);
    }



    return main();
}

long int Factorial(long int numero)
{
    long int respuesta;
    if(numero == 0)
    {
        return 1;
    }
    respuesta = numero * Factorial(numero-1);
    return (respuesta);
}
