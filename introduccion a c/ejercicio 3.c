/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
//Lopez Fernando
/*1. Ingresar la inicial del nombre, edad y sexo de 10 personas. Indicar:
a) suma de las edades,
b) promedio
c) inicial la edad mas grande e inicial de la edad mas chica*/

int main()
{
    int i;
    char nombre;
    int edad;
    char sexo;
    int suma;
    float promedio;
    int maximo;
    int minimo;
    char letraMaxima;
    char letraMinima;

    suma=0;



    for(i=0;i<10;i++){

        printf("ingrese la inicial de su nombre : ");
         fflush(stdin);
         scanf("%c" , &nombre);
        printf("ingrese su edad ");
         fflush(stdin);
        scanf("%d", &edad);

       if(i== 0 || edad > maximo)
        {
            maximo = edad;
            letraMaxima=nombre;

        }

        if(i == 0 || edad< minimo)
        {
            minimo = edad;
            letraMinima=nombre;

        }

        suma= suma+ edad;


    }
    promedio= (float)suma/10;

    printf("el promedio es %f\n " , promedio);
    printf("la suma es %d\n " , suma);
    printf("la inicial de la edad mas grande es %c\n ", letraMaxima);
    printf("la inicial de la edad mas chica es %c\n ", letraMinima);
}

