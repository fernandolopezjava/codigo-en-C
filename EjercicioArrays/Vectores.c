
#include "Vectores.h"

void CargarNumeros(int numeros[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
}

int CargarNumerosPares(int numeros[], int cant)
{
    int i;
     for(i=0; i<cant; i++)
    {
        if((numeros[i]%2)==0)
        {
            printf("%d - ", numeros[i]);
        }

    }
 return numeros[i];
}

int ContadorMaximo(int numeros[], int cant,int max)
{
   int i;

   for(i=0;i< cant;i++)
   {
    if(i == 0 || numeros[i]>max)
     {
     max=numeros[i];
     }

   }
  return max;
}

int ContadorMinimo(int numeros[], int cant,int min)
{
    int i;

   for(i=0;i< cant;i++)
   {

    if(i == 0 || numeros[i]<min)
    {
        min=numeros[i];
    }

   }
  return min;
}

int ContarAparicionEnteros(int numeros[], int cant, int dato)
{
    int i;
    int cantidadApariciones;
    cantidadApariciones=0;
    for(i=0; i<cant; i++)
    {
        if(dato == numeros[i])
        {
            cantidadApariciones++;
        }
    }

    return cantidadApariciones;
}

int PosicionIndice(int numeros[], int cant , int dato)
{

    int i;
    int indice;

    for(i=0; i<cant; i++)
    {
        if( numeros[i]==dato)
        {
            printf("Posicion: %d\n", i);
        }
    }

return indice;

}

int PromedioVector(int numeros[], int cant)
{
    int suma;
    int i;
    suma = 0;
    for (i = 0; i < cant; i++)
    {
        suma = suma + numeros[i];
    }
    return suma / cant;
}





