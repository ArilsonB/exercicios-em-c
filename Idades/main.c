#include <stdio.h>

int main() {
	int i = 0, Idade = 0, IdadeDigitada;
	float MediaIdades = 0;
	
	do {
		scanf("%d", &IdadeDigitada);
		
		if(IdadeDigitada >= 0){
			Idade += IdadeDigitada;
			i++;
		}
				
	} while (IdadeDigitada >= 0);
	
	
	MediaIdades = Idade / (float)i;
	
	printf("%.2f\n", MediaIdades);
	
	return 0;
}