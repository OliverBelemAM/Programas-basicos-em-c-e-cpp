#include <stdio.h>

int main() {
	
	int tab, i, mult;
	
		printf ("Dejesa a tabuada para qual valor? ");
		scanf ("%d", &tab);
		
	for (i = 1; i <= 10; i++ ){
		mult = tab * i;
		printf ("%d X  %.2d = %.2d \n", tab, i, mult);
	}	
	
	return 0;
}
