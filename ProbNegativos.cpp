#include <stdio.h>

int main() {
	
	int n, i; 
	
	printf ("quantos numeros voce quer digitar? ");
	scanf  ("%d", &n);
	
	int vet[n];
	
		for (i = 0; i < n; i++ ){
			printf ("Digite um numero (ate 10): ");
			scanf ("%d", &vet[i]);			
		}
		
			printf ("\nNUMEROS NEGATIVOS:\n");
			
		for (i = 0; i < n; i++ ){
			if (vet [i] < 0){
				printf ("%d\n", vet [i]);
			}
			else {
				printf ("\nNENHUM NUMERO NEGATIVO DETECTADO\n");
			}
		}	
				
	return 0;
}
