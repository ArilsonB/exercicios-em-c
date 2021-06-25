#include <stdio.h>

float AreaDoTriangulo(int a, int b);

int main() {
	int base, alt;
	float res;
	
	printf("Base do triangulo -> ");
	scanf("%d", &base);
	
	printf("Altura do triangulo -> ");
	scanf("%d", &alt);
	
	res = AreaDoTriangulo(base, alt);
	
	printf("A area do triangulo e %.2f", res);
	
	return 0;
}

float AreaDoTriangulo(int a, int b){
	return (a * b) / 2.0;
}