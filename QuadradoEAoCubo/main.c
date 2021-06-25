#include <stdio.h>

int main() {
	int i, Numero, Quadrado, AoCubo;
	
	scanf("%d", &Numero);
	
	for(i = 1; i <= Numero; i++){
		
		Quadrado = i * i;
		
		AoCubo = (i * i) * i;
		
		printf("%d %d %d\n", i, Quadrado, AoCubo);
		
	}
	
	return 0;
}