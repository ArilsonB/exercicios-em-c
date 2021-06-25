#include <stdio.h>

void troca(int *a, int *b);

int main() {
	int valor1, valor2;
	
	printf("Informe o valor 1 -> ");
	scanf("%d", &valor1);
	
	printf("Informe o valor 2 -> ");
	scanf("%d", &valor2);
	
	troca(&valor1, &valor2);
	
	printf("Os valores sao -> %d e %d\n", valor1, valor2);
}

void troca(int *a, int *b){
	int aux;
	
	aux = *a;
	
	*a = *b;
	
	*b = aux;
}