#include <stdio.h>
#include <math.h>

void limpar_entrada() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
	
	char nome [50];
	double valorHora, horasTrabalhadas, pagamento;
	
	printf ("Nome: ");
		scanf ("%s", &nome);
	printf ("Valor p/ hora: ");
		limpar_entrada();
		scanf ("%lf", &valorHora);
	printf ("Horas Trabalhadas: ");
		limpar_entrada();
		scanf ("%lf", &horasTrabalhadas);
	
		if (horasTrabalhadas == 0) {
			printf ("Nao e gerado pagamento!!");
			printf ("Finalizado Programa!");
		}
		else {
			pagamento = horasTrabalhadas * valorHora;
		}
	
			printf ("O pagamento para %s deve ser: R$%.2lf", nome, pagamento);
	
	return 0;
}
