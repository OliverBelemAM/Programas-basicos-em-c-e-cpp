#include <stdio.h>

int main(){
	
	double consumo, distancia, combustivel;
	
	printf ("Qual a distancia percorrida: ");
		scanf ("%lf", &distancia);
	printf ("Quanto de combustivel foi gasto: ");
		scanf ("%lf", &combustivel);
		
		if (distancia > combustivel){
			consumo = distancia / combustivel;
		}
		else{
			consumo = combustivel / distancia;
		}
	
		printf ("O consumo do carro foi de: %.3lf", consumo);
	
	return 0;
}
