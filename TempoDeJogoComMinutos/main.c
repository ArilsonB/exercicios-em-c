#include <stdio.h>

int main() {
	int HoraInicio, MinutoInicio, HoraFim, MinutoFim, tHora, tMinuto;
	
	scanf("%d %d %d %d", &HoraInicio, &MinutoInicio, &HoraFim, &MinutoFim);
	
	tHora = HoraFim - HoraInicio;
	
	tMinuto = MinutoFim - MinutoInicio;
	
	if(tMinuto < 0){
		tMinuto += 60;
		tHora--;
	}
	
	
	if(tHora < 0){
		tHora += 24;
	}
	
	if(HoraInicio == HoraFim && MinutoInicio == MinutoFim){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tHora, tMinuto);
	}
	
	return 0;
}