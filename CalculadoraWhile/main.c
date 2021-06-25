#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	char OutraOperacao = 'S';
	int i = 0, Opcao, NumeroDeOperacoes;
	float Valor, Resultado = 0;

	printf("\n\t CALCULADORA:");
	
	do {
		
		printf("\n\n\t 1 - Soma");
		printf("\n\t 2 - Subtração");
		printf("\n\t 3 - Multiplicação");
		printf("\n\t 4 - Divisão");
		printf("\n\t 5 - Sair\n");

		printf("\n\t Digite o número da operação que deseja realizar -> ");
		scanf("%d", &Opcao);
		
		switch(Opcao){
			case 1:
				printf("\n\t Somar: \n");
				printf("\n\t Quantas números deseja somar? ");
				scanf("%d", &NumeroDeOperacoes);
				
				do {
					i++;
					printf("\n\t Digite um valor -> ");
					scanf("%f", &Valor);
					
					Resultado += Valor;
				} while (i < NumeroDeOperacoes);
				break;
			case 2:
				printf("\n\t Subtrair: \n");
				printf("\n\t Quantas números deseja subtrair? ");
				scanf("%d", &NumeroDeOperacoes);
				
				do {
					i++;
					printf("\n\t Digite um valor -> ");
					scanf("%f", &Valor);
					
					if(i == 1){
						Resultado = Valor;
					}else{
						Resultado -= Valor;
					}
					
				} while (i < NumeroDeOperacoes);
				break;
			case 3:
				printf("\n\t Multiplicar: \n");
				printf("\n\t Quantas números deseja multiplicar? ");
				scanf("%d", &NumeroDeOperacoes);
				
				do {
					i++;
					printf("\n\t Digite um valor -> ");
					scanf("%f", &Valor);
					
					if(i == 1){
						Resultado = 1;
					}
					
					Resultado *= Valor;
					
				} while (i < NumeroDeOperacoes);
				break;
			case 4:
				printf("\n\t Dividir: \n");
				printf("\n\t Quantas números deseja dividir? ");
				scanf("%d", &NumeroDeOperacoes);
				
				do {
					i++;
					printf("\n\t Digite um valor -> ");
					scanf("%f", &Valor);
	
					
					if(i == 1){
						Resultado = Valor;
					}else{
						Resultado /= Valor;
					}
				} while (i < NumeroDeOperacoes);
				break;
			case 5:
				printf("\n\t Você escolheu sair...");
				printf("\n\n\t Obrigado pela utilização.");
				return 0;
				break;
			default:
				printf("\n\t Opção inválida");
		}
		
		printf("\n\n\t O resultado da operação foi -> %.2f", Resultado);
		
		printf("\n\n\t Deseja realizar outra operação? (S ou N) ");
		scanf("%s", &OutraOperacao);
		
		Resultado = 0;
		
	}while(OutraOperacao == 'S');
	
	printf("\n\n\t Obrigado pela utilização.");
	
	return 0;
}