#include <stdio.h>
#include "funcoes.h"


int main() {
	char continuar;
	double a, b, resultado;
	char operacao;

	do {
		printf("\ndigite o primeiro numero: ");
				scanf("%lf", &a);

		printf("digite o segundo numero: ");
				scanf("%lf", &b);

		printf("Escolha a operacao (+, -, *, /): ");
		                scanf(" %c", &operacao);

				switch (operacao) {
				case '+':
				resultado = somar(a, b);
				printf("Resultado: %.21f\n", resultado);
				break;

				case '-':
				resultado = subtrair(a, b);
				printf("Resultado: %.21f\n", resultado);
				break;

				case '*':
                                resultado = multiplicar(a, b);
				printf("Resultado: %.21f\n", resultado);
                                break;

				case'/':
				if (b == 0) {
					printf("Erro: divisao por zero nao é permitida!\n");
				} else {
				resultado = dividir(a, b);
				printf("resultado: %.21f\n", resultado);
				}
				break;

				default:
				printf("operacao inválida!\n");
				}

				printf("deseja continuar? (q para sair, qualquer outra tecla para continuar): ");
				scanf(" %C",&continuar);

	} while (continuar != 'q');

	return 0;
}
