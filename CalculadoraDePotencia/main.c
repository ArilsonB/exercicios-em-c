#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

long calcularPotencia(int Base, int Expoente){
	int i;
	long Resultado;
	
	if(Expoente != 0){

		Resultado = Base;
		i = 1;
		
		while(i < Expoente){
			Resultado = Resultado * Base;
			i++;
		}
	}else{
		Resultado = 1;
	}

	return Resultado;
	
}

int main() {
	
	setlocale(LC_ALL, "");
	
	int Base, Expoente;
	long Resultado;
	
	printf("\n\tCALCULADORA DE POTENCIA\n\n");
	
	printf("\tDigite o numero da base -> ");
	scanf("%d", &Base);
	
	printf("\tInforme o expoente -> ");
	scanf("%d", &Expoente);
	
	Resultado = calcularPotencia(Base, Expoente);
	
	
	printf("\n\tO resultado da potenciação é  %ld\n", Resultado);
	
	return 0;
}