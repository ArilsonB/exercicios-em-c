#include <stdio.h>
#include <stdlib.h>

int main() {
	int NotasValidas;
	float Valor, Notas, Media;
	
	Notas = 0.0;
	NotasValidas = 0;
	while(NotasValidas < 2){
		scanf("%f", &Valor);
		
		if(Valor >= 0 && Valor <= 10){
			Notas += Valor;
			
			NotasValidas++;
		}else{
			printf("nota invalida\n");
		}
	}
	
	Media = Notas / 2.0;
	
	printf("media = %.2f\n", Media);
	
	return 0;
}