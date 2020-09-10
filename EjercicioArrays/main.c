
#include <stdlib.h>
#include "Vectores.h"

#define T 10
/*1. Crear un vector de tipo entero, con capacidad para almacenar 10 números
. Realizar un programa que permita:
a. Cargar secuencialmente dicho vector.
b. Mostrar solo los valores pares.
c. Mostrar cantidad de veces que se encontro el valor maximo, y los indices en
   donde se ubica dicho valor.
d. Mostrar cantidad de veces que se encontro el valor minimo, y los indices en
   donde se ubica dicho valor.*/


/*A resolver:
1. Completar las funciones restantes para cada proceso del algoritmo
2. Agregar un menu de opciones para interactuar con el usuario.

Pueden agregar una opcion para calcular el promedio de todos los numeros.
Otra opcion para mostrar los numeros en reversa
Mostrar los negativos de manera creciente y los positivos de manera decreciente

*/
int main()
{

    int miVector[T];
    int maximo;
    int minimo;
    int cantidadMaximos;
    int cantidadMinimos;

    cantidadMaximos = 0;
    cantidadMinimos = 0;


     CargarNumeros(miVector, T);

     printf("los valores pares son \n");
     CargarNumerosPares(miVector,T);

     maximo=ContadorMaximo(miVector,T,maximo );
     printf("el maximo es  %d\n", maximo);

     minimo=ContadorMinimo(miVector, T,minimo );
     printf("el minimo es %d\n", minimo);

     cantidadMaximos = ContarAparicionEnteros( miVector, T ,maximo);
     printf("La cantidad de veces que se repite el maximo es de: %d\n", cantidadMaximos);

     cantidadMinimos = ContarAparicionEnteros(miVector, T ,minimo);
     printf("La cantidad de veces que se repite el minimo es de: %d\n", cantidadMinimos);

     printf("indices donde aparece el maximo: \n");
     PosicionIndice(miVector, T ,maximo);

     printf("indices donde aparece el minimo: \n");
     PosicionIndice(miVector, T ,minimo);



    return 0;
}

