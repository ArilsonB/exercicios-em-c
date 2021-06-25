#include <stdio.h>
int main(){
    int N, X, i, is, a, d=0;
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        
        scanf("%d", &X);
        
        a = X / 2;
        
        d = 0;
        
        for(is = 1; is <= a; is++){
            
            if(X % is == 0) d += is;
            
        }
        
        if(d==X){
            printf("%d eh perfeito\n",X);
        }else{
            printf("%d nao eh perfeito\n",X);
        }
    }
    return 0;
}