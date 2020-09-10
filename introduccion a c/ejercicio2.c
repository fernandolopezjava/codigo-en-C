#include <stdio.h>

int main(){

int i;
    char sexo;

    int contadorFemenino;
    int contadorMasculino;

    contadorFemenino = 0;
    contadorMasculino = 0;

    for(i=0; i<5; i++)
    {
        printf("ingrese sexo: ");
        fflush(stdin);// No recomendable: setbuff(NULL...);
        scanf("%c", &sexo);

        if(sexo == "f")

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


