#include <stdio.h>

#define PI	3.1416

int main()
	{
	int radio, perimetro;

	radio = 20;
	perimetro = 2 * PI * radio;

	printf( "El perímetro es: %i", perimetro  );
	
	return 0;
	}