#include <stdio.h>
#include <string.h>

int main (){
	
	double largura, comprimento, area, valormq, precomq;
		
		printf(" Digite a Largura do terreno: ");
		 scanf ("%lf", &largura);
		printf(" Digite o Comprimento do terreno: ");
		 scanf ("%lf", &comprimento);
		printf(" Digite o Valor do Metro Quadrado: ");
		 scanf ("%lf", &valormq);
		 
			area = largura * comprimento;
			precomq = area * valormq;
			
		printf (" A Area do terreno e: %.2lf\n", area);
		printf (" O Valor do terreno e: %.2lf\n", precomq);
		
	return 0;
}
