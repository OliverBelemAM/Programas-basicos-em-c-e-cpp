#include <stdio.h>

int main () {
	
	int n, i;
	
	printf ("Quantos numeros voce vai digitar? ");
	scanf  ("%d", &n);
	
	double vet[n];
		 
	   /*Sempre que for começar com 0 colocar <n para não extrapolar a contagem no N*/
		
	for (i = 0; i < n; i++) { /*O for sempre começa com 0*/
		printf ("Digite um numero: ");
		scanf ("%lf", &vet[i]);	
     }
	   /*O & lê o "endereço da variavel"*/
	   
		printf ("\nNUMEROS DIGITADOS:\n");
		
	for (i = 0; i < n; i++) {
		printf ("%.1lf\n", vet[i]);
	}
	   
	return 0;
}
