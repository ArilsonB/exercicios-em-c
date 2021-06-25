#include <stdio.h>

int main() {
	int i, Numero, Maior, MaiorPosicao;
	
	Maior = 0;
	MaiorPosicao = 0;
	
	for(i = 0; i < 100; i++){
		
		scanf("%d", &Numero);
		
		if(Numero > Maior){
			Maior = Numero;
			MaiorPosicao = i + 1;
		}
		
	}
	
	printf("%d\n", Maior);
	printf("%d\n", MaiorPosicao);
	
	return 0;
	
}