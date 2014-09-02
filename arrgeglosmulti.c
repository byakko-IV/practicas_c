#include <stdio.h>
#define DIAS    7
#define HORAS   24

int main()
     {
     int temp[DIAS][HORAS];
     
     float media = 0;
     int hora, dia;

     for( dia=0 ; dia<DIAS ; dia++ ) {
          for( hora=0 ; hora<HORAS ; hora++ ) {
             printf( "Temperatura de las %d el día %d: ", hora, dia );
             scanf( "%i", &temp[dia][hora] );                            
             media += temp[dia][hora];
          }
     }
     media = media / HORAS / DIAS;

     printf( "\nLa temperatura media de toda la semana es %f\n", media );
     return 0;
}
