#include <stdio.h>
#include <string.h>

/*Este void (funçõo) é para a leitura de texto*/
void ler_texto(char *buffer, int length) {
	fgets(buffer, length, stdin);
	strtok(buffer, "\n"); /*Limpa a quebra de texto lida pelo fgets*/
}

/*Este void limpa a entrada de dado para que possa receber outro dado*/
void limpar_entrada() {
	char c;
	while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
		
	double salario;
	char nome[50];
	int idade;
	char sexo;
	
		printf("Nome da pessoa: ");
		 ler_texto(nome, 50);
		printf("Salario da pessoa: ");
		 scanf("%lf", &salario);
		printf("Qual a idade da pessoa: ");
		 scanf("%d", &idade);
		printf("Qual o sexo da pessoa: ");
		 limpar_entrada();
		 scanf("%c", &sexo);
		 
	printf("Nome: %s\n", nome);
	printf("Salario: %.2lf\n", salario);
	printf("Idade: %d\n", idade);
	printf("Sexo: %c\n", sexo);
	

	return 0;
}
