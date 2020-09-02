#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>

int variableGlobal = 100;

void mostrar(int);

int main()
{
    printf("Global desde el main %d\n", variableGlobal);//100
    variableGlobal = 500;
    mostrar(666);//666
    printf("\nGlobal desde el main %d\n", variableGlobal);//666

}
void mostrar(int variableGlobal)
{
     printf("Global desde mostrar %d", variableGlobal);

}

