#include <stdio.h>

//Funcion para obtener input del usuario de algun numero
//Puede tener variaciones de acuerdo al tipo de dato que se requiera
int get_int(char *prompt){
    int var;
    do
    {
        printf("%s", prompt);
        scanf("%i", &var);
    }
    while (var > 2147483647);
    return var;
}

int main(void)
{

    //Se pide cuantas veces se imprimira
    int loop = get_int("Write your number: \n");

    //Bucle principal 
   for (size_t i = 0; i <= loop; i++)
   {
        //Bucle secundario que va disminuyendo la cantidad de prints de acuerdo al bucle principal
        for (size_t j = 0; j <= i; j++)
        {
            printf("#");
        
        }

        
        printf("\n");
   }
   
}