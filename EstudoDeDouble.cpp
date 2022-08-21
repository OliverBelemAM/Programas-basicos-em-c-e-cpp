#include <stdio.h>
#include <string.h>

int main () {
	
	int a, b;          /*Mesmo o resultado sendo double,*/
	double resultado;  /* ele nao aceita a formatação*/
	
	/*double a, b, resultado; seria o correto
	para sair o resultado 2.5*/
	
		a = 5;
		b = 2;
		resultado = a / b;

	printf ("%.1lf\n", resultado);
		
	return 0;
}
