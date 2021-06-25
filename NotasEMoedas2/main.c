#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int Notas, Cem, Cinquenta, Vinte, Dez, Cinco, Dois;
	
	int Moedas, UmReal, CinquentaCentavos, VinteECincoCentavos, DezCentavos, CincoCentavos, UmCentavo;
	
	double Valor;
	
	scanf("%lf", &Valor);
	
	Notas = Valor;
	
	Cem = Notas / 100;
	Notas = Notas % 100;
	
	Cinquenta = Notas / 50;
	Notas = Notas % 50;
	
	Vinte = Notas / 20;
	Notas = Notas % 20;
	
	Dez = Notas / 10;
	Notas = Notas % 10;
	
	Cinco = Notas / 5;
	Notas = Notas % 5;
	
	Dois = Notas / 2;
	
	UmReal = Notas % 2;
	
	Moedas = Valor * 100;
	Moedas = Moedas % 100;
	
	CinquentaCentavos = Moedas / 50;
	Moedas = Moedas % 50;
	
	VinteECincoCentavos = Moedas / 25;
	Moedas = Moedas % 25;
	
	DezCentavos = Moedas / 10;
	Moedas = Moedas % 10;
	
	CincoCentavos = Moedas / 5;
	
	UmCentavo = Moedas % 5;
	
	printf("NOTAS:\n");
	
	printf("%d nota(s) de R$ 100.00\n", Cem);
	
	printf("%d nota(s) de R$ 50.00\n", Cinquenta);
	
	printf("%d nota(s) de R$ 20.00\n", Vinte);
	
	printf("%d nota(s) de R$ 10.00\n", Dez);
	
	printf("%d nota(s) de R$ 5.00\n", Cinco);
	
	printf("%d nota(s) de R$ 2.00\n", Dois);
	
	printf("MOEDAS:\n");
	
	printf("%d moeda(s) de R$ 1.00\n", UmReal);
	
	printf("%d moeda(s) de R$ 0.50\n", CinquentaCentavos);
	
	printf("%d moeda(s) de R$ 0.25\n", VinteECincoCentavos);
	
	printf("%d moeda(s) de R$ 0.10\n", DezCentavos);
	
	printf("%d moeda(s) de R$ 0.05\n", CincoCentavos);
	
	printf("%d moeda(s) de R$ 0.01\n", UmCentavo);
	
	return 0;
	
}