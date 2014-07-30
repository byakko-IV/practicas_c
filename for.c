#include <stdio.h>

int main()
	{
	int i, j;

	for( i=0, j=5 ; i<10 ; i++, j=j+5 )
		{
		printf( "Hola " );
		printf( "Esta es la línea %i", i );
		printf( "j vale = %i\n", j );
		}
	}