#include <stdio.h>

int rec(int n){
	int calc;
	if(n == 1){
		return 1;
	}else{
		calc = (n - 1) * rec(n - 1);
		return calc;
	}
}

int main() {
	int n1 = 4, n2 = 6, res;
	
	res = rec(n1) + rec(n2);
	
	printf("%d", res);
	
}