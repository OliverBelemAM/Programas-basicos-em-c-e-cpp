#include <stdio.h>
#include <math.h>

int main () {
	
	double raio, area;
	
	printf ("Digite o valor do RAIO do circulo: ");
	  scanf ("%lf", &raio);
	  
	area = 3.1415 * pow(raio, 2.0);
	
	printf ("A area do circulo e: %.3lf", area);
	
	
	return 0;
}
