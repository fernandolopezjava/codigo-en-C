/******************************************************************************
lopez fernando

1. Ingresar la inicial del nombre, edad y sexo de 10 personas. Indicar:
a) suma de las edades, 
b) promedio 
c) inicial la edad mas grande e inicial de la edad mas chica.
d) El promedio de edades de las mujeres.
e) La inicial de la mujer mas grande.
f) La inicial del hombre mas joven.



*******************************************************************************/
#include <stdio_ext.h>

int main()
{
    char nombre;
    int edad;
    char sexo;
    int sumaEdades;
    int i;
    float promedioEdades;
    int maximaEdad;
    int minimaEdad;
    int edadmasgrande;
    int edadmasjoven;
    char nombreMasGrande;
    char nombreMasChico;
    char nombrehombrejoven;
    char nombremujergrande;
    int mujermasgrande;
    int hombremasjoven;
    float promediomujeres;
    int acumuladormujeres;
    int contadormujeres;
    
    sumaEdades = 0;
    hombremasjoven=0;
    mujermasgrande=0;
    acumuladormujeres=0;
    contadormujeres=0;
  
    
    for(i=0; i<3; i++)
    {
        printf("Ingrese su nombre: ");
        __fpurge(stdin);
        scanf("%c", &nombre);
        
        printf("Ingrese su edad: ");
        scanf("%d", &edad);
        
        printf("Ingrese sexo: ");
        __fpurge(stdin);
        scanf("%c", &sexo);
        
        sumaEdades=sumaEdades + edad; // sumaEdades += edad;
    
        if(i==0 || edad > maximaEdad);
        {
            maximaEdad = edad;
            nombreMasGrande = nombre;
        }
        if(i==0 || edad <minimaEdad)
        {
            minimaEdad = edad;
            nombreMasChico = nombre;
        }
        
        if(sexo=='f'){
           acumuladormujeres=acumuladormujeres+edad;
           contadormujeres++;
           if(mujermasgrande==0 || edad >edadmasgrande){
               edadmasgrande=edad;
               nombremujergrande=nombre;
           }
       }
       else{

           if(hombremasjoven==0|| edad< edadmasjoven){
               edadmasjoven=edad;
               nombrehombrejoven=nombre;
           }
       } 
        
        
        /*if(i==0)
        {
            maximaEdad = edad;
            minimaEdad = edad;
            nombreMasGrande = nombre;
            nombreMasChico = nombre;
        }
        else
        {
            if(edad > maximaEdad)
            {
                maximaEdad = edad;
                nombreMasGrande = nombre;
            }
            if(edad < minimaEdad)
            {
                minimaEdad = edad;
                nombreMasChico = nombre;
            }
        }*/
                
        
        
    }
    
    promedioEdades =  (float)sumaEdades/i;
    promediomujeres = (float)acumuladormujeres / (float)contadormujeres;
    
    
    
    printf("La suma de las edades es: %d\n", sumaEdades);
    printf("El promedio de las edades es: %.2f\n", promedioEdades);
    printf("El nombre del mas grande es: %c\n", nombreMasGrande);
    printf("El nombre del mas chico es: %c\n", nombreMasChico);
    printf("El promedio de las edades de las mujeres es: %.2f\n", promediomujeres);
    printf("la inicial del nombre de la mujer con  la edad mas grande es %c\n ",nombremujergrande );
    printf("la inicial del nombre del hombre con la edad mas chica es %c\n ", nombrehombrejoven);

    return 0;
}

