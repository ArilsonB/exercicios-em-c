#include <stdio.h>

int main() {
	int i, numero;
	long fatorial = 1;
	
	scanf("%d", &numero);
	
	for(i = 0; i < numero; i++){
		fatorial *= (numero - i);
	}
	
	printf("%ld\n", fatorial);
	
	return 0;
}