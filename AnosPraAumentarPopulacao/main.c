#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int anos = 0;
	double paisA = 5000000, paisB = 7000000, soma;
	
	
	while(paisA < paisB){
		soma = 0;
		soma = paisA * 0.03;
		paisA = paisA + soma;
		
		soma = 0;
		soma = paisB * 0.02;
		paisB = paisB + soma;
		
		anos++;
	}
	
	printf("Seriam necessários %d anos.", anos);
	
	
	
	
	return 0;
}