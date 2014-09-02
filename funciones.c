#include <stdio.h>

void compara( int a, int b )     /* Metemos los parámetros a y b a la función */
     {
     if ( a>b ) printf( "%i es mayor que %i\n" , a, b );
     else printf( "%i es mayor que %i\n", b, a );
     }

int main()
     {
     int num1, num2;

     printf( "Introduzca dos números: " );
     scanf( "%i %i", &num1, &num2 );
     
     compara( num1, num2 );/* Llamamos a la función con sus dos argumentos */
	 
     return 0;
     }
