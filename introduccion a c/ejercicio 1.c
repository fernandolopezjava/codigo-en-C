/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

Se Ingresan dos precios , mostrar :
1)la suma de los importes
2) el promedio de la compra
3) el precio final mas iva(21%)

*******************************************************************************/
#include <stdio.h>
//fernando lopez

int main()
{
    int primerPrecio;
    int segundoPrecio;
    int suma;
    float iva;
    float promedio;

    printf("introdusca el primer precio aqui");
    scanf("%d", &primerPrecio);
    printf("introdusca el segundo precio aqui");
    scanf("%d", &segundoPrecio);

    suma= primerPrecio + segundoPrecio;
    promedio= (float)suma / 2;
    iva= suma*1.21;

    printf("la suma de los precios es de %d\n ", suma);
    printf("el promedio de los precio es de %f\n ", promedio);
    printf("el precio final con iva es de %f" , iva);


    return 0;
}
