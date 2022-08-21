#include <stdio.h>
#include <math.h>

int main () {
	
	double preco, troco, recebido, valorFinal;
	int quantidade;
	
		printf ("Preco unitario do produto: ");
		 scanf ("%lf", &preco);
		printf ("Quantidade Comprada: ");
		 scanf ("%d", &quantidade);
		printf ("Dinheiro Recebido: R$");
		 scanf ("%lf", &recebido);
		 
			valorFinal = preco * quantidade;
		
				if (recebido > valorFinal){
					troco = recebido - valorFinal;
				}
				else {
					troco = valorFinal - recebido;
				}
	
		printf ("O troco a ser recebido e: R$%.2lf", troco);
	
	
	return 0;
}
