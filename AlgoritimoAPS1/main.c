#include <stdio.h>

int f(int a, int b){
	while((a > 0) && (b > 0)){
		if(a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	
	return (a + b);
}

int main() {
	int a = 14, b = 22, n;
	
	n = f(f(a, b), f(b, a));
	
	printf("%d", n);
	
	return 0;
}