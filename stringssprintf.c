#include <stdio.h>
#include <string.h>

int main()
     {
     char nombre_completo[50];
     char nombre[]="Gorka";
     char apellido[]="Urrutia";

     sprintf( nombre_completo, "%s %s", nombre, apellido );
     printf( "El nombre completo es: %s.\n", nombre_completo );
     }
