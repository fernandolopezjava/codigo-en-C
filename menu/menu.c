/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
   int opcion;

   do
   {
       printf("1.Cargar datos\n2.Borrar datos\n3.Listar\n4.Salir\n");
       printf("Elija una opcion: ");
       scanf("%d", &opcion);

       switch(opcion)
       {
            case 1:
                printf("Estoy cargando datos..");
            break;
            case 2:
                printf("Estoy borrando...");
            break;
            case 3:
                printf("Estoy mostrando...");
            break;
            case 4:
                printf("Gracias por su donacion...");
            break;
       }

   }while(opcion!=4);

   return 0;
}


