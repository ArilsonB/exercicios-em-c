#include <stdio.h>

int main() {
	int A = -1, B = 4, S = 0;
	
	while((A <= 5) && (B >= 0)){
		if(A <= B){
			S = S + A * B;
		}else{
			S = S - A * B;
		}
		
		A = A + 1;
		B = B - 1;
	}
	
	printf("A = %d, B = %d, S = %d", A, B, S);
}