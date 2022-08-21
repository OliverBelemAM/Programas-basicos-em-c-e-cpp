#include <stdio.h>

int main() {
	
	int idade, soma, cont;
	double media;
	
		soma = 0;
		cont = 0;
		
	do {
			printf (" Digite as idades: ");
			scanf ("%d", &idade);
				
		
		if (idade < 0){
			printf ("UM NUMERO NEGATIVO FOI DETECTADO \n");
		}
		else{
			soma = soma + idade;	
			cont = cont + 1;
		}
		
			media = (double) soma / cont;
				
	} while ( idade > 0);
	
		if (media > 0) {
			printf ("MEDIA = %.2lf", media);
		}
		
	return 0;
}
