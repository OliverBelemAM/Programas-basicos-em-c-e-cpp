#include <stdio.h>

int main() {
	
	int M, N;
	
	printf ("Qual a quantidade de Linhas da Matriz? ");
		scanf ("%d", &M);
	printf ("Qual a quantidade de Colunas da Matriz? ");
		scanf ("%d", &N);
	
	double mat [M][N]; //Declaração da Matriz
	double vet [N]; //Declaração do Vator
		
		for (int i = 0; i < M; i++){
			printf ("Digite os elementos da %da. linha:\n", i+1);
			for (int j = 0; j < N; j++){
				scanf ("%lf", &mat[i][j]);
			}
		}
	
			for (int i = 0; i < M; i++){   //Decaração do vetor para o recebimento das variaveis
				vet [i] = 0;
				for (int j = 0; j < N; j++){
					vet [i] = vet[i] + mat[i][j];	
				}	
			}
	
	printf ("VETOR GERADO: \n");
		for (int i = 0; i < M; i++){
			printf("%.1lf\n", vet[i]);
		}
	
	
	return 0;
}
