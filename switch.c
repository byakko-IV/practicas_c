#include <stdio.h>

	int main()
		{
		int num;

		printf( "Introduce un número " );
		scanf( "%i", &num );
		switch( num )
			{
			case 1:
				printf( "Es un 1\n" );
				break;
			case 2:
				printf( "Es un 2\n" );
				break;
			case 3:
				printf( "Es un 3\n" );
				break;
			default:
				printf( "No es ni 1, ni 2, ni 3\n" );
			}
		}