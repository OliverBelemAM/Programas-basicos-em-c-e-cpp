#include <stdio.h>

int main(){
	
	int x, y;
	
	while ( x != y) {
			
		printf ("DIGITE DOIS NUMEROS: \n");
			scanf ("%d", &x);
			scanf ("%d", &y); 
			
				if (x > y) {
					printf ("ORDEM DECRESCENTE!\n");
				}
				else if (y > x) {
					printf ("ORDEM CRESCENTE!\n");	
				}
				else {
					printf ("NUMEROS IGUAIS!!\n");
					printf ("PROGRAMA ENCERRADO!");
				}
	}
	
	return 0;
}
