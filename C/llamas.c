#include <stdio.h>


float llamas(char *cantidad)
{
    float var;
    do
    {
        printf("%s", cantidad);
        scanf("%f", &var);
    } while (var > 2147483647);
    return var;
}

float llamas_nacen(float n)
{
    float nacidas = n/3;
    return nacidas;
}

float llamas_mueren(float n)
{
    float muertas = n/4;
    return muertas;
}


int main(void)
{

    float ogl;
    do{
        ogl= llamas("Please enter current amount of llamas: ");
    }while(ogl < 9);
    
    float end;

    do{
        end = llamas("Please enter target llamas: ");
    }while(end<ogl);

    float years = 0;



    while(ogl < end)
    {
        ogl += ogl/12;
        years++;
    }

    printf("Years: %f\n", years);
    //Objetivo: Pedir al usuario cuantas llamas quiere y devolver cuanto se tardarian en nacer
}