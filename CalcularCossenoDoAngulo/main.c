#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

long calcularFatorial(int Numero){
	
	long Fatorial = 1;
	int i;
	
	for(i = Numero; i > 1; i--){
		Fatorial *= i;
	}
	
	return Fatorial;
}

double calcularCosseno(double Angulo, int Termos){
	
	double Resultado = 0.0;
	int i;
	
	for (i = 0; i < Termos; i++){
		Resultado = Resultado + ( (pow(-1.0, i) * pow(Angulo, (2.0 * i)))  / calcularFatorial(2 * i));
	}
	
	return Resultado;
	
}

int main() {
	
	setlocale(LC_ALL, "");
	
	double Angulo, Resultado;
	int Termos = 30;
	
	printf("\tInforme o valor do ângulo -> ");
	scanf("%lf", &Angulo);
	
	Resultado = calcularCosseno(Angulo, Termos);
	
	printf("\n\tO valor de cos(x) é %lf\n", Resultado);
	
	return 0;
}
