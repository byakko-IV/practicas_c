#include <stdio.h>

	int main()
		{
		int a;

		printf( "Introduce un número " );
		scanf( "%i", &a );
		if ( a<10 )
			{
			printf ( "El número introducido era menor de 10.\n" );
			}
		else if ( a>10 && a<100 )
			{
			printf ( "El número está entre 10 y 100\n" );
			}
		else if ( a>100 )
			{
			printf( "El número es mayor que 100\n" );
			}
		printf( "Fin del programa\n" );
		}