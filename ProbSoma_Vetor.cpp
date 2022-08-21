#include <stdio.h>

int main() {
	
	int n, i, soma;
	double media;
	
	printf (" QUANTOS NUMEROS VOCE QUER DIGITAR? ");
	scanf ("%d", &n);
	
	int vet[n];
	soma = 0;
	media = 0; 
	
	for ( i=0; i<n; i++) {
		printf ("Digite um numero: ");
		scanf ("%d", &vet[i]);
		soma = soma + vet[i];
	}
		
		media = soma / n;
		
		printf ("\nValores = ");
	for ( i=0; i<n; i++) {
		printf (" %d", vet[i]);
	}
	
		printf ("\nSoma = %d\n", soma);
		printf ("Media = %.2lf\n", media);
	
	return 0;
}
