#include <stdio.h>

int main() {
	int i, Quantidade, Peso1 = 2, Peso2 = 3, Peso3 = 5;
	float Nota1, Nota2, Nota3, Media;
	
	scanf("%d", &Quantidade);
	
	for(i = 0; i < Quantidade; i++){
		scanf("%f %f %f", &Nota1, &Nota2, &Nota3);
		
		Media = (Nota1 * Peso1) + (Nota2 * Peso2) + (Nota3 * Peso3);
		Media = Media / (Peso1 + Peso2 + Peso3);
		
		printf("%.1f\n", Media);
	}
	
	return 0;
}