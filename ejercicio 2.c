/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio_ext.h>
//lopez fernando
//Pedir al usuario que ingrese 5 sexos ('f' o 'm' (utilizar una estructura repetitiva) . Indicar que sexo se repite mas). Mandar link gdb e incluir consigna y apellido y nombre en un comentario

#include <stdio_ext.h>

int main()
{
    int i;
    char sexo;
    
    int contadorFemenino;
    int contadorMasculino;
    
    contadorFemenino = 0;
    contadorMasculino = 0;
    
    for(i=0; i<5; i++)
    {
        printf("ingrese sexo: ");
        __fpurge(stdin);//fflush(stdin);// No recomendable: setbuff(NULL...);
        scanf("%c", &sexo);  
        
        if(sexo == 'f')
        
        {
            contadorFemenino++;
        }
        else
        {
            contadorMasculino++;
        }
    }
    
    if(contadorMasculino>contadorFemenino)
    {
        printf("Se ingresaron mas hombres que mujeres");
    }
    else
    {
        if(contadorFemenino>contadorMasculino)
        {
            printf("Se ingresaron mas mujeres que hombres");
        }
        else
        {
            printf("Se ingresaron iguales cantidades");
        }
    }

    return 0;
}

