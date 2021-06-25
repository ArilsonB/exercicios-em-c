#include <stdio.h>

int main() {
	int Opcao, Alcool = 0, Gasolina = 0, Diesel = 0;
	
	while(Opcao != 4){
		scanf("%d", &Opcao);
		
		switch(Opcao){
			case 1:
				Alcool++;
				break;
			case 2:
				Gasolina++;
				break;
			case 3:
				Diesel++;
				break;
		}
	}
	
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", Alcool);
	printf("Gasolina: %d\n", Gasolina);
	printf("Diesel: %d\n", Diesel);
	
	return 0;
}