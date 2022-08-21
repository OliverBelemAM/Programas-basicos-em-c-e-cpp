#include <stdio.h>
#include <string.h>

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main () {
	
	int n, i, nmenor;
	double soma, media, Porcent;
	
	printf ("Quantas pessoas serao digitadas? ");
	scanf ("%d", &n);
	
	char nome[n] [50];
	double altura[n];
	int idade[n];
	
	for (i = 1; i <= n; i++){
		printf ("\nDados da %da Pessoa\n", i);
		
			printf ("Nome: ");
				limpar_entrada();
				gets (nome[i]);
				
			printf ("Idade: ");
				scanf ("%d", &idade[i]);
				
			printf ("Altura (em m): ");
				scanf ("%lf", &altura[i]);
				
					soma = soma + altura[i];
	}
	
		media = soma / n;
		
			printf ("\nAltura Media: %.2lf\n", media);
		
		nmenor = 0;	
		for (i = 1; i <= n; i++){
			if (idade[i] < 16){
				nmenor++;			
			}
		}
		Porcent = nmenor * 100.0 / n;
		
			printf ("Pessoas com menos de 16 anos: %.1lf %%\n", Porcent);
		
			for (i = 1; i <= n; i++){
				if (idade[i] < 16){
					printf ("%s \n", nome[i]);	 		
				}
			}	
	
	return 0;
}
