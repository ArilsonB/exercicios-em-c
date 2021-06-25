#include <stdio.h>
#include <math.h>

long calc_fat(int fat);
float calc_cos(float x);

int main() {
	float x;
	
	while(x <= 1.00001){
		
		printf("\nO cosseno de %.1f eh %.2f\n", x, calc_cos(x));
		
		x += 0.1;
	}
}

float calc_cos(float x){
	const int QTD = 10;
	int cont, exp = 0, sinal = 1;
	float cos = 0.0;
	
	for (cont = 1; cont <= QTD; cont++){
		cos += sinal * (pow(x, exp) / calc_fat(exp));
		exp += 2;
		sinal *= -1;
	}
	
	return cos;
	
}

long calc_fat(int fat){
	
	if(fat <= 1) return 1;
	
	return fat * calc_fat(fat - 1);
}