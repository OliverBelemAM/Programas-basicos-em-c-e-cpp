#include <stdio.h>

int main (){
	
	int N, cont;
	
		printf ("Qual a ordem da matriz? ");
			scanf ("%d", &N);	
	
	int mat[N][N]; //Declaração da matriz, ambos N por ser uma matriz quadrada
	
		for (int i=0; i < N; i++){
			for (int j=0; j < N; j++){
				printf ("ELEMENTO [%d, %d]: ", i, j);
				scanf ("%d", &mat[i][j]);
			}
		}
	
			printf ("\n DIAGONAL PRINCIPAL: \n");
			
		for (int i=0; i < N; i++) { 
			printf (" %d", mat [i][i]);	
		}	
	
	cont = 0;
	
		for (int i = 0; i < N; i++){
			for (int j = 0; j < N; j++){
				if( mat[i][j] < 0 ){
					cont++;	
				}
			}
		}
	
			printf ("\n QUANTIDADE DE NEGATIVOS: %d", cont);
	
	return 0;
}
