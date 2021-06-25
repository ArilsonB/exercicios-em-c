#include <stdio.h>

int main() {
	int X, Y, Nulo = 0;
	
	while(Nulo != 1){
		scanf("%d %d", &X, &Y);
		
		if(0 < X && Y > 0){
			printf("primeiro\n");
		}else if(X < 0 && Y > 0){
			printf("segundo\n");
		}else if(X < 0 && Y < 0){
			printf("terceiro\n");
		}else if(X > 0 && Y < 0){
			printf("quarto\n");
		}else{
			Nulo = 1;
		}
	}
	
	return 0;
}