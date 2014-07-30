#include <stdio.h>

	int main()
		{
		printf( "Línea 1\n" );
		goto linea3;	/* Le decimos al goto que busque la etiqueta linea3 */
		printf( "Línea 2\n" );
		linea3:			/* Esta es la etiqueta */
		printf( "Línea 3\n" );
		}