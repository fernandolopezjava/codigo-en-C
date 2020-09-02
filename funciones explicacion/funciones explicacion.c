#include <stdio.h>
#include <stdlib.h>
/*
1. Depuracion
2. Reutilizacion
3. Independencia del codigo
*/

//1. Declaracion, firma, Prototipo de la funcion
int SumarNumeros(int primerNumero, int segundoNumero);
void realizarSumas(void);

int main()
{
    realizarSumas();
}

void realizarSumas(void)
{
    int unNumero;
    int otroNumero;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d", &unNumero);
    printf("Ingrese otro numero: ");
    scanf("%d", &otroNumero);
    //3. Llamada o invocacion o uso

    suma = SumarNumeros(7,9);//Parametros actuales
    printf("La suma de los numeros es: %d\n", suma);
    suma = SumarNumeros(1000,500);
    printf("La suma de los numeros es: %d\n", suma);
    suma = SumarNumeros(unNumero, otroNumero);
    printf("La suma de los numeros es: %d\n", suma);

}
//2. Desarrollo, implementacion, programar la funcion (Hacer el codigo)
int SumarNumeros(int primerNumero, int segundoNumero)//Parametros formales
{
    int suma;
    suma = primerNumero + segundoNumero;

    return suma;
}


