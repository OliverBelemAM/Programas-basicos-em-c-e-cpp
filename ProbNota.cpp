#include <stdio.h>
#include <math.h>

int main () {
	
	double nota1, nota2, nfinal;	
	
		printf (" VALIDADOR DE NOTAS \n");
	
	printf (" Digite a Primeira nota: ");
		scanf ("%lf", &nota1);
	printf (" Digite a Segunda nota: ");
		scanf ("%lf", &nota2);
	
		nfinal = nota1 + nota2;
	
	printf ("NOTA FINAL = %.1lf \n", nfinal);
	
		if (nfinal < 60.0) {
		  printf (" REPROVADO ");
		}
		else {
		  printf (" APROVADO ");		
		}	
		
	
	return 0;
}
