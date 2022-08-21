#include <stdio.h>
#include <math.h>

int main () {
	
	double Ca, Cb, Cc, delta, x1, x2;
	
	printf ("Coeficiente a: ");
		scanf ("%lf", &Ca);
	printf ("Coeficiente b: ");
		scanf ("%lf", &Cb);
	printf ("Coeficiente c: ");
		scanf ("%lf", &Cc);
		
		delta = pow(Cb, 2.0) - 4*Ca*Cc;
		x1 = (-Cb + sqrt(delta)) / (2*Ca);   
		x2 = (-Cb - sqrt(delta)) / (2*Ca);
	
	
	
		if ( delta < 0) {
			printf (" Esta equação nao possui raizes reais !!");
		}
		else {
			printf (" X1 = %lf\n", x1);
			printf (" X2 = %lf\n", x2);
		}
	
	return 0;
}
