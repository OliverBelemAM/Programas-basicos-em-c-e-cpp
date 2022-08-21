#include <stdio.h>
#include <math.h>

int main (){
	
	double medida1, medida2, medida3, areaQ, areaTri, areaTra;
	
	printf ("Medida A: ");
	 scanf ("%lf", &medida1);
	printf ("Medida B: ");
	 scanf ("%lf", &medida2);
	printf ("Medida C: ");
	 scanf ("%lf", &medida3);
	
		areaQ = pow(medida1, 2.0);
		areaTri = (medida1 * medida2) / 2;
		areaTra = (medida1 + medida2) * medida3 / 2;
		
	printf ("Area do Quadrado: %.4lf\n", areaQ);
	printf ("Area do Triangulo: %.4lf\n", areaTri);
	printf ("Area do Trapezio: %.4lf\n", areaTra);
	
	return 0;
}
