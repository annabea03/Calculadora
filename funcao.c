#include "funcoes.h"

double somar(double a, double b) {
	return a + b;
}

double subtrair(double a, double b) {
	return a - b;
}

double multiplicar(double a , double b) {
	return a * b;
}

double dividir(double a, double b) {
	if (b != 0 )
		return a / b;
	else {
		return 0;
	}
}
