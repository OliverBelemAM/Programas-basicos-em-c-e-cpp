#include <stdio.h>

int main() {
	
	int v1, v2, v3, menor;	
	
	printf (" Primeiro Valor: ");
		scanf ("%d", &v1);
	printf (" Segundo Valor: ");
		scanf ("%d", &v2);
	printf (" Terceiro Valor:");
		scanf ("%d", &v3);
	
	if (v1 < v2 && v1 < v3) {
		menor = v1;
	}
	else if (v2 < v3) {
		menor = v2;
	}
	else {
		menor = v3;
	}
	
	printf ("\n MENOR NUMERO DIGITADO: %d", menor);
	
	return 0;
}
