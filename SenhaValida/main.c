#include <stdio.h>

int main() {
	const int senha = 2002;
	int senhaDigitada;
	
	while (senhaDigitada != senha){
		scanf("%d", &senhaDigitada);
		
		if(senhaDigitada != senha){
			printf("Senha Invalida\n");
		}
	}
	
	printf("Acesso Permitido\n");
	
	return 0;
}