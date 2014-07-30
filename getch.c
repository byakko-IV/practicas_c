#include <stdio.h>

int main()
	{
	char letra;

	printf( "Introduce una letra: " );
	fflush( stdout );
	letra = getche();
	printf( "\nHas introducido la letra: %c", letra );
	return 0;
	}