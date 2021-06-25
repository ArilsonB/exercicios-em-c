#include <stdio.h>

int main() {
	int i = 2, N, Quadrado;
	
	scanf("%d", &N);
	
	if(N > 5 && N < 2000){
		while(i <= N){
			
			Quadrado = i * i;
			
			printf("%d^2 = %d\n", i,Quadrado);
			
			i += 2;
		}
	}
	
	return 0;
}