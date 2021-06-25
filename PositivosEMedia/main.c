#include <stdio.h>

int main() {
	
	float valor, media;
	int i, positivos = 0;
	
	for(i = 0; i < 6; i++){
		scanf("%f", &valor);
		
		if(valor > 0){
			media += valor;
			positivos++;
		}
	}
	
	media = media / positivos;
	
	printf("%d valores positivos\n", positivos);
	printf("%.1f\n", media);
	
	return 0;
	
}