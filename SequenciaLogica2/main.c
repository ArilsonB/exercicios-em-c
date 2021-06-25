#include <stdio.h>

int main(){
    int a=0,b=0,x=1,q=0;
    
    scanf("%d %d", &a, &b);
    
    if( (1 < a) && (a < 20) && (b < 100000) ) { 
        for(x=1;x<=b;x++){ 
            q++; 
            if(q==a){ 
                printf("%d\n",x); q=0;
            } else { 
                printf("%d ",x);
            }
        }
    }
    return 0;
}