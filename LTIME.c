#include <stdio.h>

int main(void) {
	// your code goes here
	int t, x;
	scanf("%d", &t);
	while(t--){
	    scanf("%d" , &x);
	    if(x>=1 && x<=4){
	        printf("yes \n");
	        
	    }
	    else{
	        printf("no \n");
	    }
	}
	return 0;
}

