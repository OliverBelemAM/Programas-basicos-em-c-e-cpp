#include <stdio.h>

int main (){
	
	int x, y, soma, troca, i;
	
	printf ("Digite dois numeros:\n ");
	scanf ("%d", &x);
	scanf ("%d", &y);
	
		if (x > y) {
			troca = x;
			x = y; 
			y = troca;
		}
	
		for ( i = x + 1; i < y; i++ ){
			if (i%2 != 0){
				soma = soma + i;	
			}
		}
		
		printf ("A SOMA DOS VALORES IMPARES: %d", soma);
		
	return 0; 
}
