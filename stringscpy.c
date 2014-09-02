#include <stdio.h>
#include <string.h>

int main()
     {
     char textocurso[] = "Este es un curso de C.";
     char destino[50];

     strcpy( destino, textocurso );
     printf( "Valor final: %s\n", destino );
     }
