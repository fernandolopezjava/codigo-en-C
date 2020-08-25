/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio_ext.h>
//lopez fernando
//Pedir al usuario que ingrese 5 sexos ('f' o 'm' (utilizar una estructura repetitiva) . Indicar que sexo se repite mas). Mandar link gdb e incluir consigna y apellido y nombre en un comentario

int main()
{
     int i;
     int contadormasculino;
     int contadorfemenino;
     char s;
     
     contadormasculino=0;
     contadorfemenino=0;
    
     
     for(i=0; i<5 ; i++){
         printf("introdusca el sexo, si es m es masculino y si es f es femenino : ");
         __fpurge(stdin);
         scanf("%c" , &s);
         if(s=='m'){
             contadormasculino++;
         }
         else if(s=='f'){
             contadorfemenino++;
         }
         
         
     }
     
   if(contadormasculino>contadorfemenino){
       printf("el sexo que mas se repite es masculino");
   }
   else{
       printf("el sexo que mas se repite es femenino");
   }

    return 0;
}
