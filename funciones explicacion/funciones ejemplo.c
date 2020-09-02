/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void muestra(int x,int y);

int main(){
int x,y;
printf("Ingrese un numero entero");
scanf("%d",&x);
printf("Ingrese un numero entero");
scanf("%d",&y);
muestra(x,y);
printf("\n-----valores dentro de main----");
printf("\nx vale %d \ny vale %d",x,y);
}

void muestra(int x,int y){
x=y;
printf("\n-----valores dentro de la funcion----");
printf("\nx vale %d \ny vale %d",x,y);
}

