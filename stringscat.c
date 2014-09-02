#include <stdio.h>
#include <string.h>

int main()
     {
     char nombre_completo[50];
     char nombre[]="Gorka";
     char apellido[]="Urrutia";

     strcpy( nombre_completo, nombre );
     strcat( nombre_completo, " " );
     strcat( nombre_completo, apellido );
     printf( "El nombre completo es: %s.\n", nombre_completo );
     }
