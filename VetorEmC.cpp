#include <stdio.h>

int main () {
	
	int n, i;
	
	printf ("Quantos numeros voce vai digitar? ");
	scanf  ("%d", &n);
	
	double vet[n];
		 
	   /*Sempre que for come�ar com 0 colocar <n para n�o extrapolar a contagem no N*/
		
	for (i = 0; i < n; i++) { /*O for sempre come�a com 0*/
		printf ("Digite um numero: ");
		scanf ("%lf", &vet[i]);	
     }
	   /*O & l� o "endere�o da variavel"*/
	   
		printf ("\nNUMEROS DIGITADOS:\n");
		
	for (i = 0; i < n; i++) {
		printf ("%.1lf\n", vet[i]);
	}
	   
	return 0;
}
