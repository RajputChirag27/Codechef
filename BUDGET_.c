#include <stdio.h>

int main(void) {
	int n,x,y;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
	    scanf("%d %d", &x, &y);
	    if(x >= 30*y){
	        printf("YES \n");
	        
	    }
	    else{
	        printf("NO \n");
	    }
	}
	return 0;
}

