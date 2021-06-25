#include <stdio.h>

int main() {
	int i, TotalExp, Cobaias, TotalCobaias = 0;
	char Animal;
	int Coelho = 0, Rato = 0, Sapo = 0;
	
	float CoelhoPercent = 0.00, RatoPercent = 0.00, SapoPercent = 0.00;
	
	scanf("%d", &TotalExp);
	
	for(i = 0; i < TotalExp; i++){
			
		scanf("%d %c", &Cobaias, &Animal);
		TotalCobaias += Cobaias;
			
		switch(Animal){
			case 'C':
				Coelho += Cobaias;
				break;
			case 'R':
				Rato += Cobaias;
				break;
			case 'S':
				Sapo += Cobaias;
				break;
		}
	}
		
	printf("Total: %d cobaias\n", TotalCobaias);
	printf("Total de coelhos: %d\n", Coelho);
	printf("Total de ratos: %d\n", Rato);
	printf("Total de sapos: %d\n", Sapo);
		
	CoelhoPercent = (float)Coelho * 100.0 / TotalCobaias;
	RatoPercent = (float)Rato * 100.0 / TotalCobaias;
	SapoPercent = (float)Sapo * 100.0 / TotalCobaias;
		
	printf("Percentual de coelhos: %.2f %%\n", CoelhoPercent);
	printf("Percentual de ratos: %.2f %%\n", RatoPercent);
	printf("Percentual de sapos: %.2f %%\n", SapoPercent);
	
	return 0;
}