#include <stdio.h>
#include <stdlib.h>
/*
1. Depuracion
2. Reutilizacion
3. Independencia del codigo
*/
//fernando lopez
//1. Declaracion, firma, Prototipo de la funcion
int SumarNumeros(int primerNumero, int segundoNumero);
int restarNumeros(int primerNumero, int segundoNumero);
int multiplicarNumeros(int primerNumero, int segundoNumero);
int dividirNumeros(int primerNumero, int segundoNumero);


int main()
{
    int unNumero;
    int otroNumero;
    int suma;
    int restar;
    int multiplicar;
    int dividir;

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
    
    restar = restarNumeros(unNumero,otroNumero);//Parametros actuales
    printf("La resta de los numeros es: %d\n", restar);
    
    multiplicar = multiplicarNumeros(unNumero,otroNumero);//Parametros actuales
    printf("La multiplicacion de los numeros es: %d\n", multiplicar);
    
    dividir = dividirNumeros(unNumero,otroNumero);//Parametros actuales
    printf("La division de los numeros es: %d\n", dividir);
    
    

}


//2. Desarrollo, implementacion, programar la funcion (Hacer el codigo)
int SumarNumeros(int primerNumero, int segundoNumero)//Parametros formales
{
    int suma;
    suma = primerNumero + segundoNumero;

    return suma;
}

int restarNumeros(int primerNumero,int segundoNumero)
{
  int restar;
  restar= primerNumero - segundoNumero;
  return restar;
}

int multiplicarNumeros(int primerNumero,int segundoNumero)
{
  int multiplicar;
  multiplicar= primerNumero * segundoNumero;
  return multiplicar;
}

int dividirNumeros(int primerNumero,int segundoNumero)
{
  int dividir;
  dividir= primerNumero / segundoNumero;
  return dividir;
}


