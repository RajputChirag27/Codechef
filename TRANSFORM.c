#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	int x;
	int n;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &x);
	    
	    n = x%3;
	    if( n == 0){
	        printf("normal \n");
	        
	    }
	    else if( n == 1){
	        printf("huge \n");
	    }
	    else if( n == 2){
	        printf("small \n");
	    }
	    
	}
	return 0;
}

