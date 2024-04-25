//comentario 
#include <stdio.h>
#define s scanf
#define p printf

int main(void)
{

int fecha,anio,mes,dia, anio2, mes2, dia2, total=0; 
p("escribir su fecha de nacimiento: ");
s("%d",fecha);

anio = fecha / 10000;
mes = anio % 100;
dia = anio / 100;

anio2 = 2024;
mes2 = 4;
dia2 = 25; 

p("%d / %d = %d", anio, fecha, 10000);











}