/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
//fernando lopez

int main()
{
    int primerimporte;
    int segundoimporte;
    float promedio;
    float iva;
    int suma;
    
    printf("ingrese un precio ");
    scanf("%d", &primerimporte);
    printf("ingrese otro precio ");
    scanf("%d", &segundoimporte);
    
    suma= primerimporte + segundoimporte;
    promedio= (float)suma /2;
    iva= suma * 1.21;
    
    printf("el precio con iva %f\n " ,  iva);
    printf("el promedio es %f\n " , promedio);
    printf("la suma es %d " , suma);

    return 0;
}
