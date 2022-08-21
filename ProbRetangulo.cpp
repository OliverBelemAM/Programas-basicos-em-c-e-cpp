#include <stdio.h>
#include <math.h>

int main(){
	
	double base, altura, area, perimetro, diagonal;
	
		printf (" Digite a Base do : ");
		  scanf ("%lf", &base);
		printf (" Digite a Altura do Retangulo:");
		  scanf ("%lf", &altura); 
		  
	area = base * altura; 
	perimetro = 2 * (base + altura);
	diagonal =  sqrt(pow(base, 2.0) + pow(altura, 2.0)); 
	
		printf (" A area do Retangulo e: %lf\n", area);
		printf (" O perimetro do Retangulo e: %lf\n", perimetro);
		printf (" Sua Diagonal vale: %lf\n", diagonal);
		  
	return 0;
}
