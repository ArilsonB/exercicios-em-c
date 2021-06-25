#include <stdio.h>

int main() {
	int n, i;
	long x, y, z;
	
	scanf("%d", &n);
	
	if(n > 0 && n < 46){
		x = 1;
		y = 1;
		
		printf("0");
		for(i = 1; i < n; i++){
			printf(" %ld", x);
			
			z = x;
			x = y;
			y = y + z;
		}
		
		printf("\n");
	}
	
	return 0;
	
}